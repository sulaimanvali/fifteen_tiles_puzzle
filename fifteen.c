/******************************************************************************
 *
 * Copyright:
 *    (C) 2006 Sulaiman Vali
 *
 * File:
 *    fifteen.c
 *
 * Description:
 *    Implementation of the game of Fifteen.
 *
 *****************************************************************************/

/******************************************************************************
 * Includes
 *****************************************************************************/
#include "../pre_emptive_os/api/osapi.h"
#include "../pre_emptive_os/api/general.h"
#include <printf_P.h>
#include <ea_init.h>
#include <stdlib.h>
#include "lcd.h"
#include "key.h"
#include "select.h"
#include "hw.h"
#include "fifteen_images/tiles.h"

/******************************************************************************
 * Typedefs and defines
 *****************************************************************************/
#define GRID_COLS 4
#define GRID_ROWS 4
#define MAX_TILES (GRID_COLS*GRID_ROWS)

// pixel #defines
#define OFFSET 7
#define TILEW 29
#define TILEH 29

typedef enum {
  GAME_NOT_STARTED = 0,
  GAME_RUNNING,
  GAME_OVER,
  GAME_END
} tGameState;

/*****************************************************************************
 * Local variables
 ****************************************************************************/
static tGameState gameStatus;
static tU16 moves = 0;
static tU8 colIndex; // the column position of the gap
static tU8 rowIndex; // the row position of the gap
static char movesStr[] = " Moves:     ";

static tU8 board[GRID_ROWS][GRID_COLS];
static const unsigned char *tileImg[] = {
  _tile1,_tile2,_tile3,_tile4,
  _tile5,_tile6,_tile7,_tile8,
  _tile9,_tile10,_tile11,_tile12,
  _tile13,_tile14,_tile15,_tile16
};

/*****************************************************************************
 * External variables
 ****************************************************************************/
extern volatile tU32 ms;


/*****************************************************************************
 *
 * Description:
 *    Draw the score or whatever represents it.
 *
 ****************************************************************************/
static void drawMoves()
{
   movesStr[7]  = moves<1000 ? ' ' : moves/1000 + '0';
   movesStr[8]  = moves<100 ? ' ' : (moves%1000)/100 + '0';
   movesStr[9]  = moves<10 ? ' ' : (moves%100)/10 + '0';
   movesStr[10] = moves%10 + '0';

   lcdColor(1, 0xff);
   lcdGotoxy(16, 116);
   lcdPuts(movesStr);
}

/*****************************************************************************
 *
 * Description:
 *    Given a particular key press, move the tile appropriately (if possible).
 *
 ****************************************************************************/
static void moveTile(tU8 key)
{
  const unsigned char *img;
  tU8 destRow = rowIndex;
  tU8 destCol = colIndex;

  switch(key)
  {
    case KEY_UP:
         rowIndex++;
         break;
    case KEY_RIGHT:
         colIndex--;
         break;
    case KEY_DOWN:
         rowIndex--;
         break;
    case KEY_LEFT:
         colIndex++;
  }

  board[destRow][destCol] = board[rowIndex][colIndex];
  board[rowIndex][colIndex] = MAX_TILES;
  lcdRect(OFFSET+colIndex*TILEW, rowIndex*TILEH, TILEW, TILEH, 0xff);
  img = tileImg[board[destRow][destCol]-1];
  lcdIcon(OFFSET+destCol*TILEW, destRow*TILEH, TILEW, TILEH,
          img[2], img[3], &img[4]);
  moves++;
  drawMoves();
}

/*****************************************************************************
 *
 * Description:
 *    Return a random unpicked tile
 *
 ****************************************************************************/
static tU8 getRandomUnpicked (tU16 *bitPattern)
{
  tU8 shift = rand() % (MAX_TILES-1);

  while(((*bitPattern >> shift) & 1) != 0)
  {
    if(shift++ >= MAX_TILES-2)
        shift = 0;
  }

  *bitPattern |= 1<<shift;

  return shift;
}

/*****************************************************************************
 *
 * Description:
 *    Draw game background and game board, initialize all variables
 *
 ****************************************************************************/
static void setupGame (tBool gameStarted)
{
  tU8 i, j, x, index;
  tU16 pickedTilesBitPattern = 0;

  //initialize random generator and reset moves
  srand(ms);
  moves = 0;

  //draw background
  lcdRect(0, 0, 130, 130, 0);

  //draw score
  if (gameStarted == TRUE)
     drawMoves();

  //initialise and draw game board
  for (i=0; i<GRID_ROWS; i++)
  {
    for (j=0; j<GRID_COLS; j++)
    {
      index = i*GRID_COLS + j;
      if (index==MAX_TILES-1 && gameStarted)
      {
        lcdRect(OFFSET+(TILEW*j), TILEH*i, TILEW, TILEH, 0xff);
        board[i][j] = MAX_TILES;
      }
      else
      {
        if (gameStarted)
            x = getRandomUnpicked(&pickedTilesBitPattern);
        else
            x = index;

        lcdIcon(OFFSET+(TILEW*j), TILEH*i, TILEW, TILEH, tileImg[x][2],
                tileImg[x][3], &(tileImg[x])[4]);
        board[i][j] = x+1;
      }
    }
  }
  colIndex  = GRID_COLS-1;
  rowIndex  = GRID_ROWS-1;
}


/*****************************************************************************
 *
 * Description:
 *    Display message.
 *
 ****************************************************************************/
static void dispMessage(char *message, tU16 x, tU16 y)
{
  lcdGotoxy(x,y);
  lcdColor(0,0xe0);
  lcdPuts(message);
}

/*****************************************************************************
 *
 * Description:
 *    Check whether the board is sorted.
 *
 ****************************************************************************/
static tBool hasWon()
{
  tU8 i, j, n=1;

  for (i=0; i<GRID_ROWS; i++)
    for (j=0; j<GRID_COLS; j++)
        if(board[i][j] != n++)
            return FALSE;

  return TRUE;
}

/*****************************************************************************
 *
 * Description:
 *    Cheer and jump with joy.
 *
 ****************************************************************************/
static void celebrate()
{
  tU8 i, j;

  lcdIcon(OFFSET+(TILEW*(GRID_ROWS-1)), TILEH*(GRID_COLS-1), TILEW, TILEH,
          tileImg[MAX_TILES-1][2], tileImg[MAX_TILES-1][3],
          &(tileImg[MAX_TILES-1])[4]);
  lcdColor(0,0xe0);
  lcdGotoxy(5,25);  lcdPuts("~*~ Hip Hip ~*~");
  lcdGotoxy(5,40);  lcdPuts("~*~ Horray! ~*~");
  lcdGotoxy(5,55);  lcdPuts("  Grid sorted  ");

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      setBuzzer(TRUE);
      osSleep(1);

      setBuzzer(FALSE);
      osSleep(1);
    }
    osSleep(10);
  }

  osSleep(100);
  lcdColor(0,0xcd);  lcdGotoxy(0,75);  lcdPuts("Press to restart");
}

/*****************************************************************************
 *
 * Description:
 *    Check whether the move is legal/possible.
 *
 ****************************************************************************/
static tBool isValid (tU8 key)
{
  switch(key) {
    case KEY_UP:
        if (rowIndex >= GRID_ROWS-1)
           return FALSE;
        break;
    case KEY_RIGHT:
        if (colIndex == 0)
           return FALSE;
        break;
    case KEY_DOWN:
        if (rowIndex == 0)
           return FALSE;
        break;
    case KEY_LEFT:
        if (colIndex >= GRID_COLS-1)
           return FALSE;
        break;
  }
  return TRUE;
}

/*****************************************************************************
 *
 * Description:
 *    Implements game of fifteen
 *
 ****************************************************************************/
void playFifteen(void)
{
  gameStatus = GAME_NOT_STARTED;

  setupGame(FALSE);
  dispMessage("Press to start", 5, 40);

  while(gameStatus != GAME_END)
  {
    tU8 anyKey;

    anyKey = checkKey();
    switch(gameStatus)
    {
      case GAME_NOT_STARTED:
        if (anyKey != KEY_NOTHING)
        {
          gameStatus = GAME_RUNNING;
          setupGame(TRUE);
        }
        break;

      case GAME_RUNNING:
        if (anyKey != KEY_NOTHING)
        {
            if (anyKey == KEY_CENTER)
               gameStatus = GAME_OVER;
            else
            {
               if (isValid(anyKey))
               {
                 moveTile(anyKey);
                 if (hasWon())
                 {
                   celebrate();
                   gameStatus = GAME_NOT_STARTED;
                 }
               }
            }
        }
        break;

      case GAME_OVER:
      {
        tMenu menu;

        menu.xPos = 10;
        menu.yPos = 40;
        menu.xLen = 6+(12*8);
        menu.yLen = 4*14;
        menu.noOfChoices = 2;
        menu.initialChoice = 0;
        menu.pHeaderText = "Game over!";
        menu.headerTextXpos = 20;
        menu.pChoice[0] = "Restart game";
        menu.pChoice[1] = "End game";
        menu.bgColor       = 0;
        menu.borderColor   = 0x6d;
        menu.headerColor   = 0;
        menu.choicesColor  = 0xfd;
        menu.selectedColor = 0xe0;

        switch(drawMenu(menu))
        {
          case 0: gameStatus = GAME_RUNNING; setupGame(TRUE); break;  //Restart game
          case 1: gameStatus = GAME_END; break;                       //End game
          default: break;
        }
        break;
      }

      default:
        gameStatus = GAME_END;
        break;
    }
    osSleep(1);
  }
}

