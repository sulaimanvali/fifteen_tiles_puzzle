/*
 * First element is width of image
 * Second element is height of image
 * Third element specifies compression (0=off, 1=on)
 * Fourth element specifies escape value used with compression
 */
const unsigned char _tile16[] = {0x1d,0x1d,0x01,0x01,
0x01,0x0b,0x00,0x40,0x01,0x04,0x64,0x40,0x01,0x14,0x00,0x40,0xa9,0x01,0x04,0xf2,
0xed,0xed,0xed,0xe9,0xc4,0x60,0x01,0x0f,0x00,0x20,0xcd,0xf6,0xf2,0xe9,0xe4,0x01,
0x06,0xe0,0xe4,0xe9,0xe4,0x60,0x01,0x0c,0x00,0x64,0xf6,0xf2,0xe9,0x01,0x0b,0xe0,
0xe4,0xe4,0xa0,0x01,0x0a,0x00,0x89,0xf6,0xed,0x01,0x10,0xe0,0xc0,0x01,0x08,0x00,
0x64,0xf6,0xed,0x01,0x12,0xe0,0xa0,0x01,0x06,0x00,0x20,0xf6,0xed,0x01,0x14,0xe0,
0x80,0x01,0x05,0x00,0xcd,0xf2,0x01,0x15,0xe0,0xc0,0x20,0x00,0x00,0x00,0x44,0xf6,
0xe9,0x01,0x0c,0xe0,0xe4,0x01,0x07,0xe4,0xe0,0xc0,0xa0,0x00,0x00,0x00,0xcd,0xf2,
0x01,0x0b,0xe0,0xe4,0x01,0x0a,0xe4,0xe0,0xc0,0x20,0x00,0x00,0xf2,0xe9,0x01,0x09,
0xe0,0xe4,0x01,0x0c,0xe4,0xe0,0xc0,0x60,0x00,0x44,0xf2,0x01,0x09,0xe0,0xe4,0x01,
0x0e,0xe4,0xc0,0x80,0x00,0x84,0xf2,0x01,0x08,0xe0,0xe4,0x01,0x0f,0xe4,0xc0,0x80,
0x00,0xa9,0xed,0x01,0x08,0xe0,0xe4,0x01,0x07,0xe4,0xe9,0xe9,0xe9,0xe9,0x01,0x04,
0xe4,0xc0,0x80,0x00,0x89,0xed,0x01,0x07,0xe0,0xe4,0x01,0x06,0xe4,0xe9,0x01,0x07,
0xe9,0xe4,0xe4,0xc0,0x80,0x00,0x84,0xed,0x01,0x07,0xe0,0xe4,0x01,0x05,0xe4,0xe9,
0x01,0x09,0xe9,0xe4,0xc0,0x80,0x00,0x64,0xed,0x01,0x06,0xe0,0xe4,0x01,0x05,0xe4,
0xe9,0x01,0x0b,0xe9,0xa0,0x60,0x00,0x20,0xe9,0x01,0x06,0xe0,0xe4,0x01,0x05,0xe4,
0xe9,0x01,0x0b,0xe9,0x80,0x60,0x00,0x00,0xe9,0xe4,0x01,0x05,0xe0,0xe4,0x01,0x04,
0xe4,0xe9,0x01,0x0b,0xe9,0xe4,0x60,0x40,0x00,0x00,0x84,0xe4,0x01,0x05,0xe0,0xe4,
0x01,0x04,0xe4,0xe9,0x01,0x05,0xe9,0xed,0xed,0x01,0x04,0xe9,0xa0,0x60,0x00,0x00,
0x00,0x20,0xe4,0x01,0x05,0xe0,0xe4,0x01,0x04,0xe4,0xe9,0x01,0x05,0xe9,0xed,0xed,
0xe9,0xe9,0xe9,0xe4,0x60,0x60,0x01,0x04,0x00,0x80,0xe4,0x01,0x04,0xe0,0xe4,0x01,
0x04,0xe4,0xe9,0x01,0x0a,0xe9,0x80,0x60,0x01,0x06,0x00,0xc0,0x01,0x04,0xe0,0xe4,
0x01,0x05,0xe4,0xe9,0x01,0x08,0xe9,0xa0,0x60,0x40,0x01,0x07,0x00,0xe0,0xe0,0xe0,
0xe0,0x01,0x06,0xe4,0xe9,0x01,0x07,0xe9,0xa0,0x60,0x40,0x01,0x08,0x00,0x20,0xc0,
0xe0,0xe0,0xe0,0x01,0x06,0xe4,0xe9,0x01,0x04,0xe9,0xe4,0x80,0x60,0x40,0x01,0x0b,
0x00,0xa0,0xc0,0xc0,0xe0,0x01,0x06,0xe4,0xe9,0xe9,0xe4,0xa0,0x60,0x60,0x20,0x01,
0x0d,0x00,0x40,0xa0,0x01,0x08,0xc0,0xa0,0x60,0x60,0x60,0x01,0x11,0x00,0x20,0x60,
0x80,0xa0,0x01,0x04,0x80,0x60,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

