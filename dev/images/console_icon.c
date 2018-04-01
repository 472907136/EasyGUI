#include <stdlib.h>

#include "app.h"

static const
uint32_t _icon[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xC8A3A3A3, 0x579B9B9B, 0x40B6B6B6, 0x40B9B9B9, 0x40BABABA, 0x40BABABA, 0x40BABABA, 0x40BABABA, 0x40BABABA, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 0x40B9B9B9, 
        0x40B8B8B8, 0x40B8B8B8, 0x40B8B8B8, 0x40B7B7B7, 0x40B7B7B7, 0x40B6B6B6, 0x40B4B4B4, 0x4AA3A3A3, 0xA38A8A8A, 0xFE959595, 0xFF000000,
  0xC59D9D9D, 0x06BEBEBE, 0x00FBFBFB, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 
        0x00FEFEFE, 0x00FEFEFE, 0x00FEFEFE, 0x00FDFDFD, 0x00FDFDFD, 0x00FDFDFD, 0x00FCFCFC, 0x00F8F8F8, 0x00D1D1D1, 0x805A5A5A, 0xFE797979,
  0x518C8C8C, 0x00FBFBFB, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FEFEFE, 
        0x00FEFEFE, 0x00FEFEFE, 0x00FDFDFD, 0x00FDFDFD, 0x00FDFDFD, 0x00FCFCFC, 0x00FCFCFC, 0x00FCFCFC, 0x00F8F8F8, 0x0D9E9E9E, 0xEA353535,
  0x3C818181, 0x00FFFFFF, 0x00FFFFFF, 0x00D8D8D8, 0x00B9B9B9, 0x00BEBEBE, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 0x00CACACA, 
        0x00CACACA, 0x00C9C9C9, 0x00C9C9C9, 0x00C9C9C9, 0x00C2C2C2, 0x00B8B8B8, 0x00E3E3E3, 0x00FAFAFA, 0x00FAFAFA, 0x00B8B8B8, 0xD31E1E1E,
  0x3C838383, 0x00FFFFFF, 0x00FFFFFF, 0x00AAAAAA, 0x00050505, 0x00707070, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 
        0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x008E8E8E, 0x00848484, 0x00151515, 0x009E9E9E, 0x00F9F9F9, 0x00F8F8F8, 0x00B9B9B9, 0xD11E1E1E,
  0x3C848484, 0x00FFFFFF, 0x00FFFFFF, 0x00ADADAD, 0x00494948, 0x00CBCBC6, 0x00969694, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 
        0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x007F7F7F, 0x005C5C5C, 0x009E9E9E, 0x00F6F6F6, 0x00F6F6F6, 0x00B9B9B9, 0xD11E1E1E,
  0x3C868686, 0x00FFFFFF, 0x00FFFFFF, 0x00AFAFAF, 0x006C6C6B, 0x00FFFFF4, 0x00FFFFF4, 0x00DDDDD5, 0x00A2A29F, 0x00737373, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 
        0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x00707070, 0x006F6F6F, 0x00A6A6A6, 0x00F4F4F4, 0x00F3F3F3, 0x00BABABA, 0xD11E1E1E,
  0x3C888888, 0x00FFFFFF, 0x00FFFFFF, 0x00B1B1B1, 0x00555555, 0x0081817F, 0x00BEBEB8, 0x00F6F6EB, 0x00FFFFF3, 0x00F0F0E6, 0x0092928E, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 
        0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00ABABAB, 0x00E3E3E3, 0x00E0E0E0, 0x00BABABA, 0xD11E1E1E,
  0x3C8A8A8A, 0x00FFFFFF, 0x00FFFFFF, 0x00B4B4B4, 0x00393939, 0x00505050, 0x0060605F, 0x00AAAAA4, 0x00FDFDF0, 0x00FFFFF2, 0x00A7A7A1, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 
        0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x00505050, 0x004E4E4E, 0x009F9F9F, 0x00DFDFDF, 0x00DEDEDE, 0x00BBBBBB, 0xD11E1E1E,
  0x3C8C8C8C, 0x00FFFFFF, 0x00FFFFFF, 0x00B6B6B6, 0x001E1E1D, 0x00C6C6BC, 0x00FCFCEE, 0x00FFFFF1, 0x00E3E3D7, 0x0093938D, 0x004C4C4C, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 
        0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x00404040, 0x002C2C2C, 0x009B9B9B, 0x00DEDEDE, 0x00DCDCDC, 0x00BCBCBC, 0xD11E1E1E,
  0x3C8E8E8E, 0x00FFFFFF, 0x00FFFFFF, 0x00B8B8B8, 0x0020201E, 0x00FCFCEB, 0x00BCBCB2, 0x00676763, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x00303030, 
        0x00303030, 0x00303030, 0x00303030, 0x00303030, 0x002D2D2D, 0x00080808, 0x009B9B9B, 0x00DCDCDC, 0x00DADADA, 0x00BDBDBD, 0xD11E1E1E,
  0x3C909090, 0x00FFFFFF, 0x00FFFFFF, 0x00BABABA, 0x000A0A0A, 0x001E1E1C, 0x000D0D0D, 0x001E1E1E, 0x00202020, 0x00212121, 0x00222222, 0x00242424, 0x00252525, 0x00262626, 0x00272727, 0x00272727, 0x00262626, 0x00252525, 0x00232323, 0x00222222, 0x00202020, 
        0x00202020, 0x00202020, 0x00202020, 0x001E1E1E, 0x00090909, 0x00010101, 0x009B9B9B, 0x00DADADA, 0x00D8D8D8, 0x00BEBEBE, 0xD11E1E1E,
  0x3C919191, 0x00FFFFFF, 0x00FFFFFF, 0x00BCBCBC, 0x00010101, 0x00010101, 0x00010101, 0x00050505, 0x00111111, 0x00171717, 0x00272726, 0x00F1F1E1, 0x00F1F1E1, 0x00F1F1E1, 0x00F1F1E1, 0x00F1F1E1, 0x00383837, 0x001D1D1D, 0x001B1B1B, 0x00191919, 0x00171717, 
        0x00141414, 0x00111111, 0x000C0C0C, 0x00030303, 0x00010101, 0x00010101, 0x009A9A9A, 0x00D8D8D8, 0x00D6D6D6, 0x00BFBFBF, 0xD11E1E1E,
  0x3C939393, 0x00FFFFFF, 0x00FFFFFF, 0x00BEBEBE, 0x00010101, 0x00030303, 0x00070707, 0x000B0B0B, 0x000E0E0E, 0x00121212, 0x00161616, 0x00262625, 0x00282827, 0x00292928, 0x00292928, 0x00292928, 0x001C1C1C, 0x00191919, 0x00171717, 0x00151515, 0x00121212, 
        0x000F0F0F, 0x000A0A0A, 0x00050505, 0x00010101, 0x00010101, 0x00010101, 0x009A9A9A, 0x00D6D6D6, 0x00D4D4D4, 0x00C0C0C0, 0xD11E1E1E,
  0x3C949494, 0x00FFFFFF, 0x00FFFFFF, 0x00C1C1C1, 0x00040404, 0x00090909, 0x000E0E0E, 0x00121212, 0x00151515, 0x00181818, 0x001B1B1B, 0x001E1E1E, 0x00202020, 0x00212121, 0x00222222, 0x00212121, 0x00202020, 0x001F1F1F, 0x001D1D1D, 0x001A1A1A, 0x00171717, 
        0x00141414, 0x00101010, 0x000C0C0C, 0x00070707, 0x00020202, 0x00010101, 0x009A9A9A, 0x00D4D4D4, 0x00D2D2D2, 0x00C1C1C1, 0xD11E1E1E,
  0x3C959595, 0x00FFFFFF, 0x00FFFFFF, 0x00C4C4C4, 0x000A0A0A, 0x00101010, 0x00141414, 0x00181818, 0x001C1C1C, 0x00202020, 0x00232323, 0x00262626, 0x00282828, 0x00292929, 0x002A2A2A, 0x00292929, 0x00282828, 0x00272727, 0x00242424, 0x00222222, 0x001E1E1E, 
        0x001A1A1A, 0x00161616, 0x00121212, 0x000D0D0D, 0x00080808, 0x00020202, 0x009A9A9A, 0x00D2D2D2, 0x00D0D0D0, 0x00C2C2C2, 0xD11E1E1E,
  0x3C979797, 0x00FFFFFF, 0x00FFFFFF, 0x00C7C7C7, 0x00101010, 0x00151515, 0x001A1A1A, 0x001F1F1F, 0x00232323, 0x00272727, 0x002B2B2B, 0x002E2E2E, 0x00303030, 0x00313131, 0x00323232, 0x00323232, 0x00313131, 0x002F2F2F, 0x002C2C2C, 0x00292929, 0x00252525, 
        0x00212121, 0x001D1D1D, 0x00181818, 0x00131313, 0x000E0E0E, 0x00080808, 0x009A9A9A, 0x00D0D0D0, 0x00CECECE, 0x00C3C3C3, 0xD11E1E1E,
  0x3C989898, 0x00FFFFFF, 0x00FFFFFF, 0x00C8C8C8, 0x00151515, 0x001B1B1B, 0x00202020, 0x00252525, 0x002A2A2A, 0x002F2F2F, 0x00323232, 0x00353535, 0x00383838, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x00393939, 0x00373737, 0x00343434, 0x00313131, 0x002D2D2D, 
        0x00282828, 0x00232323, 0x001E1E1E, 0x00181818, 0x00131313, 0x000D0D0D, 0x009C9C9C, 0x00CECECE, 0x00CCCCCC, 0x00C4C4C4, 0xD11E1E1E,
  0x3C999999, 0x00FFFFFF, 0x00FEFEFE, 0x00C8C8C8, 0x001A1A1A, 0x00212121, 0x00262626, 0x002C2C2C, 0x00313131, 0x00363636, 0x003A3A3A, 0x003D3D3D, 0x00404040, 0x00424242, 0x00434343, 0x00424242, 0x00414141, 0x003F3F3F, 0x003C3C3C, 0x00383838, 0x00343434, 
        0x002F2F2F, 0x00292929, 0x00242424, 0x001E1E1E, 0x00171717, 0x00121212, 0x009E9E9E, 0x00CCCCCC, 0x00CACACA, 0x00C5C5C5, 0xD11E1E1E,
  0x3C9A9A9A, 0x00FEFEFE, 0x00FDFDFD, 0x00C8C8C8, 0x001F1F1F, 0x00262626, 0x002C2C2C, 0x00323232, 0x00373737, 0x003D3D3D, 0x00414141, 0x00454545, 0x00484848, 0x004A4A4A, 0x004B4B4B, 0x004A4A4A, 0x00494949, 0x00474747, 0x00434343, 0x003F3F3F, 0x003A3A3A, 
        0x00353535, 0x002F2F2F, 0x00292929, 0x00232323, 0x001C1C1C, 0x00151515, 0x009F9F9F, 0x00CACACA, 0x00C8C8C8, 0x00C5C5C5, 0xD11E1E1E,
  0x3C9B9B9B, 0x00FDFDFD, 0x00FBFBFB, 0x00C8C8C8, 0x00242424, 0x002B2B2B, 0x00313131, 0x00373737, 0x003E3E3E, 0x00434343, 0x00484848, 0x004C4C4C, 0x00505050, 0x00525252, 0x00535353, 0x00535353, 0x00515151, 0x004E4E4E, 0x004B4B4B, 0x00464646, 0x00404040, 
        0x003B3B3B, 0x00343434, 0x002E2E2E, 0x00272727, 0x00212121, 0x00191919, 0x00A0A0A0, 0x00C8C8C8, 0x00C5C5C5, 0x00C5C5C5, 0xD11E1E1E,
  0x3C9C9C9C, 0x00FBFBFB, 0x00F9F9F9, 0x00E2E2E2, 0x00ACACAC, 0x00AEAEAE, 0x00B0B0B0, 0x00B2B2B2, 0x00B4B4B4, 0x00B6B6B6, 0x00B8B8B8, 0x00B9B9B9, 0x00BABABA, 0x00BBBBBB, 0x00BBBBBB, 0x00BABABA, 0x00B9B9B9, 0x00B8B8B8, 0x00B6B6B6, 0x00B4B4B4, 0x00B1B1B1, 
        0x00AEAEAE, 0x00ACACAC, 0x00A9A9A9, 0x00A6A6A6, 0x00A3A3A3, 0x009F9F9F, 0x00CECECE, 0x00C5C5C5, 0x00C3C3C3, 0x00C5C5C5, 0xD11D1D1D,
  0x42929292, 0x00F9F9F9, 0x00F7F7F7, 0x00F5F5F5, 0x00F3F3F3, 0x00F1F1F1, 0x00EFEFEF, 0x00EDEDED, 0x00EBEBEB, 0x00E9E9E9, 0x00E7E7E7, 0x00E5E5E5, 0x00E3E3E3, 0x00E2E2E2, 0x00E0E0E0, 0x00DEDEDE, 0x00DCDCDC, 0x00DADADA, 0x00D8D8D8, 0x00D6D6D6, 0x00D4D4D4, 
        0x00D2D2D2, 0x00D0D0D0, 0x00CECECE, 0x00CCCCCC, 0x00CACACA, 0x00C8C8C8, 0x00C5C5C5, 0x00C3C3C3, 0x00C1C1C1, 0x04C0C0C0, 0xD2191919,
  0x8E565656, 0x00EEEEEE, 0x00F5F5F5, 0x00F3F3F3, 0x00F1F1F1, 0x00EFEFEF, 0x00EDEDED, 0x00EBEBEB, 0x00E9E9E9, 0x00E7E7E7, 0x00E5E5E5, 0x00E3E3E3, 0x00E2E2E2, 0x00E0E0E0, 0x00DEDEDE, 0x00DCDCDC, 0x00DADADA, 0x00D8D8D8, 0x00D6D6D6, 0x00D4D4D4, 0x00D2D2D2, 
        0x00D0D0D0, 0x00CECECE, 0x00CCCCCC, 0x00CACACA, 0x00C8C8C8, 0x00C5C5C5, 0x00C3C3C3, 0x00C1C1C1, 0x00D0D0D0, 0x31747474, 0xE21F1F1F,
  0xF34D4D4D, 0x63515151, 0x0BC1C1C1, 0x00D9D9D9, 0x00D8D8D8, 0x00D7D7D7, 0x00D6D6D6, 0x00D5D5D5, 0x00D4D4D4, 0x00D3D3D3, 0x00D2D2D2, 0x00D2D2D2, 0x00D1D1D1, 0x00D0D0D0, 0x00CFCFCF, 0x00CECECE, 0x00CDCDCD, 0x00CCCCCC, 0x00CCCCCC, 0x00CBCBCB, 0x00CACACA, 
        0x00C9C9C9, 0x00C8C8C8, 0x00C7C7C7, 0x00C6C6C6, 0x00C5C5C5, 0x00C5C5C5, 0x00C4C4C4, 0x04BFBFBF, 0x2D717171, 0xAB0B0B0B, 0xFC3A3A3A,
  0xFF000000, 0xF4414141, 0xC60B0B0B, 0xAE000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 
        0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xAD000000, 0xB0000000, 0xD3111111, 0xFA353535, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

const
gui_image_desc_t image_console = {
    .x_size = 32,
    .y_size = 32,
    .bpp = 32,
    .image = (const uint8_t *)_icon
};

/*************************** End of file ****************************/
