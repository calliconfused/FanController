#ifndef BITMAPS_H
#define BITMAPS_H

const unsigned char SYMBOL_switchoff [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x73, 0xce, 0x00, 
0x00, 0xf3, 0xcf, 0x00, 
0x01, 0xf3, 0xcf, 0x80, 
0x03, 0xc3, 0xc3, 0xc0, 
0x07, 0x83, 0xc1, 0xe0, 
0x0f, 0x03, 0xc0, 0xf0, 
0x0e, 0x03, 0xc0, 0x70, 
0x1c, 0x03, 0xc0, 0x38, 
0x1c, 0x03, 0xc0, 0x38, 
0x1c, 0x03, 0xc0, 0x38, 
0x1c, 0x03, 0xc0, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x1c, 0x00, 0x00, 0x38, 
0x0e, 0x00, 0x00, 0x70, 
0x0f, 0x00, 0x00, 0xf0, 
0x07, 0x80, 0x01, 0xe0, 
0x03, 0xc0, 0x03, 0xc0, 
0x01, 0xe0, 0x07, 0x80, 
0x00, 0xff, 0xff, 0x00, 
0x00, 0x7f, 0xfe, 0x00, 
0x00, 0x1f, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00
};

const unsigned char SYMBOL_arrowdown [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x3f, 0xff, 0xff, 0xfc, 
0x3f, 0xff, 0xff, 0xfc, 
0x1f, 0xff, 0xff, 0xf8, 
0x1c, 0x00, 0x00, 0x38, 
0x0e, 0x00, 0x00, 0x70, 
0x0e, 0x00, 0x00, 0x70, 
0x07, 0x00, 0x00, 0xe0, 
0x07, 0x00, 0x00, 0xe0, 
0x03, 0x80, 0x01, 0xc0, 
0x03, 0x80, 0x01, 0xc0, 
0x01, 0xc0, 0x03, 0x80, 
0x01, 0xc0, 0x03, 0x80, 
0x00, 0xe0, 0x07, 0x00, 
0x00, 0xe0, 0x07, 0x00, 
0x00, 0x70, 0x0e, 0x00, 
0x00, 0x70, 0x0e, 0x00, 
0x00, 0x38, 0x1c, 0x00, 
0x00, 0x38, 0x1c, 0x00, 
0x00, 0x1c, 0x38, 0x00, 
0x00, 0x1c, 0x38, 0x00, 
0x00, 0x0e, 0x70, 0x00, 
0x00, 0x0e, 0x70, 0x00, 
0x00, 0x07, 0xe0, 0x00, 
0x00, 0x07, 0xe0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x01, 0x80, 0x00, 
0x00, 0x01, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00
};

const unsigned char SYMBOL_arrowup [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x80, 0x00, 
0x00, 0x01, 0x80, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x03, 0xc0, 0x00, 
0x00, 0x07, 0xe0, 0x00, 
0x00, 0x07, 0xe0, 0x00, 
0x00, 0x0e, 0x70, 0x00, 
0x00, 0x0e, 0x70, 0x00, 
0x00, 0x1c, 0x38, 0x00, 
0x00, 0x1c, 0x38, 0x00, 
0x00, 0x38, 0x1c, 0x00, 
0x00, 0x38, 0x1c, 0x00, 
0x00, 0x70, 0x0e, 0x00, 
0x00, 0x70, 0x0e, 0x00, 
0x00, 0xe0, 0x07, 0x00, 
0x00, 0xe0, 0x07, 0x00, 
0x01, 0xc0, 0x03, 0x80, 
0x01, 0xc0, 0x03, 0x80, 
0x03, 0x80, 0x01, 0xc0, 
0x03, 0x80, 0x01, 0xc0, 
0x07, 0x00, 0x00, 0xe0, 
0x07, 0x00, 0x00, 0xe0, 
0x0e, 0x00, 0x00, 0x70, 
0x0e, 0x00, 0x00, 0x70, 
0x1c, 0x00, 0x00, 0x38, 
0x1f, 0xff, 0xff, 0xf8, 
0x3f, 0xff, 0xff, 0xfc, 
0x3f, 0xff, 0xff, 0xfc, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00
};

#endif