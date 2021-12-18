/*
 * First element is width of image
 * Second element is height of image
 * Third element specifies compression (0=off, 1=on)
 * Fourth element specifies escape value used with compression
 */
const unsigned char _tile8[] = {0x1d,0x1d,0x01,0x01,
0x6c,0x01,0x1b,0x91,0x48,0x6c,0x91,0x01,0x19,0x95,0x4c,0x00,0x6c,0x91,0x95,0x01,
0x17,0xb5,0x6c,0x24,0x00,0x6c,0x91,0x95,0xb5,0x01,0x15,0xd9,0x91,0x24,0x24,0x00,
0x6c,0x91,0x95,0xb5,0x01,0x14,0xd9,0x95,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,
0xd9,0xd9,0x01,0x11,0xfd,0xb5,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,
0xd9,0x01,0x11,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,
0x01,0x11,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,
0x06,0xff,0xb6,0x49,0x49,0x49,0xb6,0x01,0x06,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,
0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x05,0xff,0x24,0x00,0x6d,0x92,0x49,0x00,0x49,
0x01,0x05,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,
0x04,0xff,0xb6,0x00,0xdb,0xff,0xff,0xff,0x92,0x00,0x01,0x05,0xff,0x6c,0x4c,0x48,
0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x04,0xff,0x92,0x00,0x01,0x04,
0xff,0xdb,0x00,0xdb,0x01,0x04,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,
0xb5,0xd9,0xd9,0x01,0x04,0xff,0xdb,0x00,0x49,0xff,0xff,0xff,0x6d,0x24,0x01,0x05,
0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x05,0xff,
0xb6,0x00,0x00,0x6d,0x6d,0x24,0xdb,0x01,0x05,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,
0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x05,0xff,0x92,0x24,0x92,0x49,0x00,0x24,0xdb,
0x01,0x05,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,
0x04,0xff,0xb6,0x00,0xdb,0xff,0xff,0xff,0x24,0x00,0x01,0x05,0xff,0x6c,0x4c,0x48,
0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x04,0xff,0x49,0x49,0x01,0x05,
0xff,0x00,0x92,0x01,0x04,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,
0xd9,0xd9,0x01,0x04,0xff,0x49,0x24,0x01,0x05,0xff,0x00,0x92,0x01,0x04,0xff,0x6c,
0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x04,0xff,0xb6,0x00,
0x92,0xff,0xff,0xff,0x49,0x00,0x01,0x05,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,
0x91,0x95,0xb5,0xd9,0xd9,0x01,0x05,0xff,0x49,0x00,0x24,0x49,0x24,0x00,0xb6,0x01,
0x05,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0xd9,0xd9,0x01,0x06,
0xff,0xdb,0x92,0x92,0xb6,0x01,0x07,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,
0x95,0xb5,0xd9,0xd9,0x01,0x11,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,
0xb5,0xd9,0xd9,0x01,0x11,0xff,0x6c,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,
0xd9,0x95,0x01,0x13,0x4c,0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0xb5,0x91,0x01,0x15,
0x48,0x24,0x24,0x00,0x6c,0x91,0x95,0x6c,0x01,0x18,0x24,0x00,0x6c,0x91,0x4c,0x01,
0x19,0x24,0x00,0x6c,0x48,0x01,0x1b,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00
};