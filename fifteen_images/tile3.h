/*
 * First element is width of image
 * Second element is height of image
 * Third element specifies compression (0=off, 1=on)
 * Fourth element specifies escape value used with compression
 */
const unsigned char _tile3[] = {0x1d,0x1d,0x01,0x01,
0x0d,0x01,0x1b,0x0e,0x09,0x0d,0x0e,0x01,0x19,0x12,0x09,0x00,0x0d,0x0e,0x01,0x18,
0x12,0x0d,0x04,0x00,0x0d,0x0e,0x12,0x12,0x01,0x15,0x17,0x0e,0x04,0x04,0x00,0x0d,
0x0e,0x12,0x12,0x01,0x14,0x17,0x12,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,
0x17,0x01,0x11,0x1b,0x12,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,
0x01,0x11,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,
0x11,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x05,
0xff,0xb6,0x6d,0x49,0x49,0x6d,0xdb,0x01,0x06,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,
0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x04,0xff,0xdb,0x00,0x24,0x92,0x92,0x24,0x00,
0x92,0x01,0x05,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,
0x01,0x0a,0xff,0x49,0x00,0x01,0x05,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,
0x12,0x12,0x17,0x17,0x01,0x0a,0xff,0x92,0x00,0x01,0x05,0xff,0x0d,0x09,0x09,0x04,
0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x0a,0xff,0x24,0x6d,0x01,0x05,0xff,
0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x07,0xff,0x6d,
0x49,0x00,0xb6,0x01,0x06,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,
0x17,0x17,0x01,0x07,0xff,0xb6,0x92,0x24,0x00,0xb6,0x01,0x05,0xff,0x0d,0x09,0x09,
0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x0a,0xff,0x92,0x00,0x01,0x05,
0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x0a,0xff,
0xdb,0x00,0xdb,0x01,0x04,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,
0x17,0x17,0x01,0x0a,0xff,0xb6,0x00,0xdb,0x01,0x04,0xff,0x0d,0x09,0x09,0x04,0x04,
0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x04,0xff,0xb6,0xb6,0x01,0x04,0xff,0x24,
0x24,0x01,0x05,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,
0x01,0x04,0xff,0x92,0x00,0x00,0x49,0x49,0x00,0x24,0xdb,0x01,0x05,0xff,0x0d,0x09,
0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,0x06,0xff,0xb6,0x92,0x92,
0xb6,0x01,0x07,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,
0x01,0x11,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x17,0x01,
0x11,0xff,0x0d,0x09,0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x17,0x12,0x01,0x14,
0x09,0x04,0x04,0x00,0x0d,0x0e,0x12,0x12,0x0e,0x01,0x15,0x09,0x04,0x04,0x00,0x0d,
0x0e,0x12,0x0d,0x01,0x18,0x04,0x00,0x0d,0x0e,0x09,0x01,0x19,0x04,0x00,0x0d,0x09,
0x01,0x1b,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
