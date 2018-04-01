#include <stdlib.h>

#include "app.h"

static const uint32_t _icon[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xE93E0D78, 0x514C1094, 0x064C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x02480E8E, 0x9234026A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x494C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x00480E8E, 0x01330268, 0x84330269, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x114C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x00480E8E, 0x00330268, 0x00330268, 0x76330269, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x00480E8E, 0x00330268, 0x00330268, 0x00330268, 0x68330269, 0xFD220245, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x00480E8E, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x5C330269, 0xFB25024B, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004B0F92, 0x0034026A, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x50330269, 0xF8270350, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x00440B86, 0x00330269, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x45330268, 0xF42A0355,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x00470D8C, 0x003C0777, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x3A3A0673,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B0F93, 0x00490F8E, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B0F92, 0x00470F8A, 0x00460F87, 0x00460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B1093, 0x00490F8F, 0x00460F88,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B0F93,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104B0F93, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 
        0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094,
  0xFC1E013D, 0x9E320166, 0x71330268, 0x70330268, 0x70330268, 0x7034026A, 0x073D077A, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 
        0x003D087B, 0x003D087B, 0x003D087B, 0x003D087B, 0x003E087B, 0x00450C87, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094,
  0x68330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 
        0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00410A7F, 0x004B0F92, 0x004C1094, 0x004C1094, 0x004C1094,
  0x08330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0078579B, 0x00411473, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x005D3687, 0x00896DA7, 0x008062A1, 0x00451875, 0x00330268, 0x00330268, 0x00330268, 0x0052297F, 0x008568A5, 0x00866AA6, 
        0x0052287F, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00380570, 0x00460F87, 0x00490F8D, 0x004B0F93, 0x004C1094,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00F7F6F9, 0x0078579B, 0x00330268, 0x00330268, 0x00330268, 0x009B83B5, 0x00F5F3F8, 0x00B19FC5, 0x00C8BBD6, 0x00F3F0F6, 0x005E3888, 0x00330268, 0x008B6FA9, 0x00F4F1F6, 0x00A994BF, 0x00AF9CC4, 
        0x00F9F8FB, 0x00725096, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F88, 0x004A0F90,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00F8F7FA, 0x0079599B, 0x00330268, 0x00330268, 0x00481C77, 0x00FCFCFD, 0x00735298, 0x00330268, 0x00330268, 0x00BDADCE, 0x00CABDD8, 0x00411472, 0x00F9F8FB, 0x0079599C, 0x00330268, 0x00330268, 
        0x008B6FA9, 0x008669A5, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00F8F7FA, 0x0079599B, 0x00330268, 0x00330268, 0x006C4992, 0x00FFFFFF, 0x003C0D6F, 0x00330268, 0x00330268, 0x008467A4, 0x00EFEBF3, 0x0065408D, 0x00FFFFFF, 0x00431673, 0x00350469, 0x007B5B9D, 
        0x007F60A0, 0x00613C8A, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00F8F7FA, 0x0079599B, 0x00330268, 0x00330268, 0x00613B8A, 0x00FFFFFF, 0x004A1F79, 0x00330268, 0x00330268, 0x009279AF, 0x00E5DFEC, 0x005A3285, 0x00FFFFFF, 0x0050267D, 0x00390A6C, 0x00A18AB9, 
        0x00C7B9D5, 0x00D7CEE2, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00F8F7FA, 0x009278AE, 0x00593184, 0x00593184, 0x00441774, 0x00E6E0EC, 0x00B6A5C9, 0x003F1171, 0x00562D82, 0x00E7E2ED, 0x00A38DBB, 0x00340469, 0x00DDD5E6, 0x00B7A5C9, 0x003A0B6D, 0x0037086B, 
        0x009F88B8, 0x00D7CEE1, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00CDC2DA, 0x00E5DFEC, 0x00E5DFEC, 0x00E5DFEC, 0x008E73AB, 0x00562D82, 0x00CEC2DA, 0x00FBFAFC, 0x00F3F1F6, 0x00AC99C2, 0x00390A6C, 0x00330268, 0x004D227B, 0x00C4B6D3, 0x00F5F3F7, 0x00F5F3F8, 
        0x00CEC2DB, 0x00694690, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x0037056F, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x05330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 
        0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00380570, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0x59330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 
        0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x00330268, 0x003E097A, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0xF6200143, 0x81330268, 0x51330268, 0x50330268, 0x50330268, 0x50330269, 0x053A0674, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00380671, 
        0x00380671, 0x00380671, 0x00380671, 0x00380671, 0x00390672, 0x003E097A, 0x00450E86, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104B0F93, 0x004A0F90, 0x00460F88, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 
        0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x104C1094, 0x004C1094, 0x004B0F93, 0x00480F8C, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 
        0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x114C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004A0F91, 0x00470F89, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 
        0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x01460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x494C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B0F93, 0x00490F8E, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 
        0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x22460F87,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xE93A0C72, 0x514C1094, 0x064C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004C1094, 0x004B0F92, 0x00470F8B, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 
        0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x00460F87, 0x18460F87, 0xB7440E83
};

const gui_image_desc_t 
image_log = {
    .x_size = 32,
    .y_size = 32,
    .bpp = 32,
    .image = (const uint8_t *)_icon
};

/*************************** End of file ****************************/
