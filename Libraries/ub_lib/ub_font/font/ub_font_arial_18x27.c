//--------------------------------------------------------------
// Autor    : UB
// EMail    : mc-4u(@)t-online.de
// Web      : www.mikrocontroller-4u.de
//--------------------------------------------------------------


//--------------------------------------------------------------
// Font-Settings : Monospace, Max-Width=32Pixel
// Ascii-Table   : First-Char = 32, Last-Char = 126
// Data-Layout   :
//        e.G. Ascii-"R"
//       "0x78,0x44,0x44,0x44,0x78,0x48,0x48,0x44,0x00,0x00"
//
//   0x78 = ".####..."
//   0x44 = ".#...#.."
//   0x44 = ".#...#.."
//   0x44 = ".#...#.."
//   0x78 = ".####..."
//   0x48 = ".#  #..."
//   0x48 = ".#  #..."
//   0x44 = ".#...#.."
//   0x00 = "........"
//   0x00 = "........"
//
//--------------------------------------------------------------


//--------------------------------------------------------------
// Includes
//--------------------------------------------------------------
#include "stm32_ub_font.h"


//--------------------------------------------------------------
// Font-Daten
// erstellt von UB mit PixelFontGenerator 1.3
// Source-Font :
// Name:Arial Monospaced MT  /  Size:22  /  Style:[N]
//--------------------------------------------------------------
const uint32_t Arial_18x27_Table[] = {
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [ ]
0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x01E00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [!]
0x0F780000,0x0F780000,0x0F780000,0x0F780000,0x0F780000,0x0F780000,0x0F780000,0x07380000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = ["]
0x038F0000,0x078F0000,0x078E0000,0x078E0000,0x071E0000,0x071E0000,0xFFFF8000,0xFFFF8000,0x0F1C0000,0x0E3C0000,0x0E3C0000,0x1E3C0000,0x1E380000,0xFFFF8000,0xFFFF8000,0x1C780000,0x3C780000,0x3C700000,0x3CF00000,0x38F00000,0x78F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [#]
0x0FF80000,0x1FFC0000,0x3DFE0000,0x7DDE0000,0x79DE0000,0x79C00000,0x79C00000,0x3DC00000,0x3FC00000,0x1FF00000,0x07FC0000,0x01FE0000,0x01FE0000,0x01DF0000,0x01CF0000,0x79CF0000,0x79CF0000,0x7DDE0000,0x3DFE0000,0x3FFC0000,0x0FF80000,0x01C00000,0x01C00000,0x01C00000,0x00000000,0x00000000,0x00000000, // Ascii = [$]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [%]
0x07E00000,0x0FF80000,0x1E780000,0x1E3C0000,0x1E3C0000,0x1E780000,0x1E780000,0x0FF00000,0x0FE00000,0x0FC00000,0x1FC00000,0x3FE78000,0x7DFF0000,0x78FF0000,0xF87F0000,0xF87E0000,0x783E0000,0x783F0000,0x7CFF8000,0x3FFF8000,0x0FC30000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [&]
0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x01C00000,0x01C00000,0x01C00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [']
0x003C0000,0x00780000,0x00700000,0x00F00000,0x00E00000,0x01E00000,0x01E00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x07C00000,0x07C00000,0x07C00000,0x07C00000,0x07C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x01E00000,0x01E00000,0x00E00000,0x00F00000,0x00700000,0x00780000,0x003C0000, // Ascii = [(]
0x1E000000,0x0F000000,0x07000000,0x07800000,0x03800000,0x03C00000,0x03C00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01F00000,0x01F00000,0x00F00000,0x01F00000,0x01F00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x03C00000,0x03C00000,0x03800000,0x07800000,0x07000000,0x0F000000,0x1E000000, // Ascii = [)]
0x01C00000,0x01C00000,0x0DDC0000,0x1FFC0000,0x1FFC0000,0x03E00000,0x07F00000,0x07F80000,0x0F780000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [*]
0x00000000,0x00000000,0x00000000,0x00000000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x7FFF0000,0x7FFF0000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [+]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00E00000,0x00E00000,0x01C00000,0x03800000,0x00000000,0x00000000, // Ascii = [,]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0FF80000,0x0FF80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [-]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [.]
0x00380000,0x00380000,0x00780000,0x00780000,0x00700000,0x00F00000,0x00F00000,0x00E00000,0x00E00000,0x01E00000,0x01E00000,0x01C00000,0x03C00000,0x03C00000,0x03800000,0x03800000,0x07800000,0x07800000,0x07000000,0x07000000,0x0F000000,0x0F000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [/]
0x07F00000,0x0FFC0000,0x1F3C0000,0x3E1E0000,0x3C1E0000,0x3C0F0000,0x7C0F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x7C0F0000,0x3C0F0000,0x3C1E0000,0x3E1E0000,0x1F3C0000,0x0FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [0]
0x00E00000,0x01E00000,0x03E00000,0x07E00000,0x0FE00000,0x3FE00000,0x3DE00000,0x39E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [1]
0x07F00000,0x1FFC0000,0x3E3E0000,0x3C1E0000,0x7C0F0000,0x780F0000,0x600F0000,0x001F0000,0x001E0000,0x003E0000,0x007C0000,0x00F80000,0x01F00000,0x03E00000,0x0FC00000,0x1F800000,0x1F000000,0x3E000000,0x7C000000,0x7FFF0000,0x7FFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [2]
0x07F00000,0x1FF80000,0x3E7C0000,0x3C3E0000,0x781E0000,0x781E0000,0x001E0000,0x003C0000,0x00FC0000,0x03F00000,0x03FC0000,0x003E0000,0x001F0000,0x000F0000,0x000F0000,0x780F0000,0x781F0000,0x7C1E0000,0x3E7E0000,0x1FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [3]
0x00000000,0x003C0000,0x007C0000,0x00FC0000,0x01FC0000,0x01FC0000,0x03FC0000,0x07BC0000,0x07BC0000,0x0F3C0000,0x1E3C0000,0x3C3C0000,0x3C3C0000,0x783C0000,0x7FFF8000,0x7FFF8000,0x003C0000,0x003C0000,0x003C0000,0x003C0000,0x003C0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [4]
0x00000000,0x1FFE0000,0x1FFE0000,0x1E000000,0x1E000000,0x3C000000,0x3C000000,0x3FF00000,0x3FFC0000,0x3E3E0000,0x7C1E0000,0x001F0000,0x000F0000,0x000F0000,0x000F0000,0x780F0000,0x781F0000,0x7C1E0000,0x3E7C0000,0x1FF80000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [5]
0x03F80000,0x0FFC0000,0x1F3E0000,0x1E1F0000,0x3C0F0000,0x3C030000,0x3C000000,0x78000000,0x7BF80000,0x7FFC0000,0x7F3E0000,0x7E1F0000,0x7C0F0000,0x7C0F0000,0x7C0F0000,0x3C0F0000,0x3C0F0000,0x3E1F0000,0x1F3E0000,0x0FFC0000,0x03F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [6]
0x00000000,0x3FFF0000,0x3FFF0000,0x001F0000,0x003E0000,0x003C0000,0x007C0000,0x00780000,0x00F00000,0x01F00000,0x01E00000,0x01E00000,0x03E00000,0x03C00000,0x03C00000,0x07C00000,0x07800000,0x07800000,0x07800000,0x07800000,0x0F800000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [7]
0x07F00000,0x0FF80000,0x1F7C0000,0x3E3E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3E1E0000,0x1F3C0000,0x0FF80000,0x1FF80000,0x3E3E0000,0x3C1E0000,0x780F0000,0x780F0000,0x780F0000,0x7C0F0000,0x3C1E0000,0x3E3E0000,0x1FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [8]
0x07F00000,0x1FF80000,0x3F3C0000,0x3C1E0000,0x7C1E0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x7C1F0000,0x3C1F0000,0x3E3F0000,0x1FFF0000,0x07EF0000,0x000F0000,0x000F0000,0x7C1E0000,0x3C1E0000,0x3E7C0000,0x1FF80000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [9]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [:]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x03E00000,0x03E00000,0x00E00000,0x00E00000,0x01C00000,0x03800000,0x00000000,0x00000000, // Ascii = [;]
0x00000000,0x00000000,0x00000000,0x00000000,0x00030000,0x001F0000,0x007F0000,0x03FC0000,0x0FE00000,0x3F800000,0x7E000000,0x7E000000,0x3F800000,0x0FE00000,0x01FC0000,0x007F0000,0x001F0000,0x00030000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [<]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x7FFF0000,0x7FFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x7FFF0000,0x7FFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [=]
0x00000000,0x00000000,0x00000000,0x00000000,0x70000000,0x7C000000,0x7F800000,0x0FE00000,0x03F80000,0x00FF0000,0x001F0000,0x001F0000,0x00FF0000,0x03F80000,0x0FE00000,0x7F800000,0x7C000000,0x70000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [>]
0x07F00000,0x1FFC0000,0x3E3E0000,0x3C1E0000,0x7C1F0000,0x780F0000,0x000F0000,0x001E0000,0x003E0000,0x007C0000,0x00F80000,0x01F00000,0x03E00000,0x03C00000,0x03C00000,0x03C00000,0x00000000,0x00000000,0x00000000,0x07C00000,0x07C00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [?]
0x03F00000,0x0FFC0000,0x0F3C0000,0x1E1E0000,0x1C1E0000,0x3C0E0000,0x3C0E0000,0x383E0000,0x39FE0000,0x3BCE0000,0x3B8E0000,0x3F9E0000,0x3BFE0000,0x39FF0000,0x3C030000,0x3C000000,0x1C000000,0x1E000000,0x0F1C0000,0x07FC0000,0x03F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [@]
0x03E00000,0x03E00000,0x07E00000,0x07F00000,0x07F00000,0x07F80000,0x0F780000,0x0F780000,0x0F7C0000,0x1E3C0000,0x1E3C0000,0x1E3E0000,0x3E1E0000,0x3FFE0000,0x3FFF0000,0x7C0F0000,0x780F0000,0x780F8000,0xF8078000,0xF0078000,0xF007C000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [A]
0x7FF00000,0x7FFC0000,0x7C3E0000,0x7C1E0000,0x7C1E0000,0x7C1F0000,0x7C1E0000,0x7C1E0000,0x7C3C0000,0x7FF80000,0x7FFC0000,0x7C3E0000,0x7C1F0000,0x7C0F0000,0x7C0F8000,0x7C0F8000,0x7C0F0000,0x7C1F0000,0x7C3E0000,0x7FFE0000,0x7FF80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [B]
0x03F80000,0x0FFE0000,0x1F1F0000,0x3E0F0000,0x3C078000,0x7C078000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x7C078000,0x3C0F8000,0x3E0F0000,0x1F3E0000,0x0FFC0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [C]
0x3FE00000,0x3FF80000,0x3C7E0000,0x3C1E0000,0x3C1F0000,0x3C0F0000,0x3C0F8000,0x3C0F8000,0x3C078000,0x3C078000,0x3C078000,0x3C078000,0x3C078000,0x3C0F8000,0x3C0F8000,0x3C0F0000,0x3C1F0000,0x3C1E0000,0x3C7C0000,0x3FF80000,0x3FE00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [D]
0x3FFF0000,0x3FFF0000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3FFE0000,0x3FFE0000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3FFF0000,0x3FFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [E]
0x3FFF8000,0x3FFF8000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3FFF0000,0x3FFF0000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [F]
0x07F80000,0x0FFE0000,0x1F3E0000,0x3E1F0000,0x3C0F0000,0x7C0F8000,0x78000000,0x78000000,0x78000000,0x78000000,0x78000000,0x78FF8000,0x78FF8000,0x780F8000,0x780F8000,0x7C0F8000,0x3C0F8000,0x3E0F8000,0x1F1F0000,0x0FFE0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [G]
0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7FFE0000,0x7FFE0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x7C3E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [H]
0x1FFC0000,0x1FFC0000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x1FFC0000,0x1FFC0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [I]
0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0x003E0000,0xF03E0000,0xF03C0000,0xF83C0000,0x7C7C0000,0x3FF80000,0x1FE00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [J]
0x7C0F8000,0x7C0F0000,0x7C1E0000,0x7C3E0000,0x7C7C0000,0x7CF80000,0x7DF00000,0x7DE00000,0x7FC00000,0x7FC00000,0x7FC00000,0x7FE00000,0x7FF00000,0x7CF00000,0x7CF80000,0x7C7C0000,0x7C3E0000,0x7C3E0000,0x7C1F0000,0x7C0F8000,0x7C0FC000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [K]
0x00000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3E000000,0x3FFF8000,0x3FFF8000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [L]
0x7C1F0000,0x7C1F0000,0x7E3F0000,0x7E3F0000,0x7F7F0000,0x7F7F0000,0x7F7F0000,0x7FFF0000,0x7FEF0000,0x7BEF0000,0x7BEF0000,0x79CF0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [M]
0x7C0F0000,0x7C0F0000,0x7E0F0000,0x7E0F0000,0x7F0F0000,0x7F0F0000,0x7F8F0000,0x7F8F0000,0x7FCF0000,0x7FCF0000,0x7FEF0000,0x7DEF0000,0x7DFF0000,0x7CFF0000,0x7CFF0000,0x7C7F0000,0x7C7F0000,0x7C3F0000,0x7C3F0000,0x7C1F0000,0x7C1F0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [N]
0x07F00000,0x0FFC0000,0x1E3E0000,0x3C1F0000,0x3C1F0000,0x7C0F0000,0x780F0000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F0000,0x780F0000,0x7C0F0000,0x3C1E0000,0x3E3E0000,0x1FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [O]
0x7FF80000,0x7FFE0000,0x7C1F0000,0x7C0F0000,0x7C0F8000,0x7C0F8000,0x7C0F8000,0x7C0F8000,0x7C0F0000,0x7C3F0000,0x7FFE0000,0x7FF80000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x7C000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [P]
0x07F00000,0x0FFC0000,0x1E3E0000,0x3C1F0000,0x3C0F0000,0x7C0F0000,0x780F0000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F8000,0x780F0000,0x78EF0000,0x7CFF0000,0x3CFE0000,0x3E3E0000,0x1FFF0000,0x07F7C000,0x00038000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [Q]
0x7FF80000,0x7FFE0000,0x7C3F0000,0x7C0F0000,0x7C0F8000,0x7C0F8000,0x7C0F8000,0x7C0F8000,0x7C0F0000,0x7C3F0000,0x7FFC0000,0x7FF00000,0x7DF00000,0x7CF80000,0x7C7C0000,0x7C7C0000,0x7C3E0000,0x7C1F0000,0x7C1F0000,0x7C0F8000,0x7C07C000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [R]
0x07F80000,0x1FFE0000,0x3E3E0000,0x3C1F0000,0x7C0F0000,0x7C010000,0x7C000000,0x3E000000,0x3FC00000,0x1FF80000,0x07FE0000,0x00FF0000,0x001F8000,0x000F8000,0x00078000,0x78078000,0x78078000,0x7C0F0000,0x3E1F0000,0x1FFE0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [S]
0xFFFF8000,0xFFFF8000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [T]
0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C1F0000,0x3C1E0000,0x3E1E0000,0x1F3E0000,0x1FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [U]
0xF003C000,0xF8078000,0xF8078000,0x78078000,0x780F0000,0x7C0F0000,0x3C0F0000,0x3C1E0000,0x3E1E0000,0x1E1E0000,0x1E3C0000,0x1F3C0000,0x0F3C0000,0x0F780000,0x0FF80000,0x07F80000,0x07F00000,0x07F00000,0x03F00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [V]
0xF003C000,0xF003C000,0xF003C000,0xF003C000,0xF0038000,0xF0078000,0xF0078000,0xF1C78000,0xF9E78000,0x79E78000,0x7BF78000,0x7BF78000,0x7FF70000,0x7FFF0000,0x7F7F0000,0x7F7F0000,0x7F3F0000,0x3E3F0000,0x3E1F0000,0x3C1F0000,0x3C1F0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [W]
0x7C0F8000,0x7C0F0000,0x3E1F0000,0x1E1E0000,0x1F3C0000,0x0F3C0000,0x0FF80000,0x07F80000,0x03F00000,0x03E00000,0x03E00000,0x03F00000,0x07F80000,0x07F80000,0x0F7C0000,0x1F3C0000,0x1E3E0000,0x3E1F0000,0x7C1F0000,0x780F8000,0xF807C000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [X]
0xF007C000,0xF8078000,0x780F8000,0x7C1F0000,0x3C1E0000,0x3E3E0000,0x1F3C0000,0x0F7C0000,0x0FF80000,0x07F00000,0x07F00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x03E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [Y]
0x3FFF0000,0x3FFF0000,0x001F0000,0x003E0000,0x003E0000,0x007C0000,0x00F80000,0x00F80000,0x01F00000,0x03E00000,0x03E00000,0x07C00000,0x07C00000,0x0F800000,0x1F000000,0x1F000000,0x3E000000,0x7C000000,0x7C000000,0x7FFF8000,0x7FFF8000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [Z]
0x03F80000,0x03F80000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03F80000,0x03F80000, // Ascii = [[]
0x0F000000,0x0F000000,0x07000000,0x07000000,0x07800000,0x07800000,0x03800000,0x03C00000,0x03C00000,0x01C00000,0x01C00000,0x01E00000,0x01E00000,0x00E00000,0x00E00000,0x00F00000,0x00F00000,0x00700000,0x00780000,0x00780000,0x00380000,0x00380000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [\]
0x1FE00000,0x1FE00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x1FE00000,0x1FE00000, // Ascii = []]
0x01E00000,0x03E00000,0x03E00000,0x07F00000,0x07F00000,0x07780000,0x0F780000,0x0F3C0000,0x1E3C0000,0x1E3E0000,0x3C1E0000,0x3C1E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [^]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFFFFC000,0xFFFFC000,0x00000000,0x00000000, // Ascii = [_]
0x0FC00000,0x03C00000,0x03C00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [`]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07F80000,0x1FFE0000,0x3E3E0000,0x3C1F0000,0x3C0F0000,0x000F0000,0x03FF0000,0x1FFF0000,0x3F0F0000,0x7C0F0000,0x781F0000,0x7C1F0000,0x7C7F0000,0x3FFF0000,0x0FEF8000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [a]
0x00000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3FF80000,0x3FFC0000,0x3F3E0000,0x3E1F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3E1F0000,0x3F3E0000,0x3FFC0000,0x3FF00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [b]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07F80000,0x0FFC0000,0x1F3E0000,0x3C1F0000,0x3C0F0000,0x78000000,0x78000000,0x78000000,0x78000000,0x780F0000,0x3C0F0000,0x3C1F0000,0x1F3E0000,0x0FFC0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [c]
0x00000000,0x001E0000,0x001E0000,0x001E0000,0x001E0000,0x001E0000,0x07FE0000,0x1FFE0000,0x3E3E0000,0x3C1E0000,0x7C1E0000,0x780E0000,0x780E0000,0x780E0000,0x780E0000,0x780E0000,0x7C1E0000,0x3C1E0000,0x3E3E0000,0x1FFE0000,0x07FE0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [d]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07F00000,0x0FFC0000,0x1F3E0000,0x3C0F0000,0x3C0F0000,0x780F0000,0x7FFF0000,0x7FFF8000,0x78000000,0x7C000000,0x3C0F0000,0x3E0F0000,0x1F3E0000,0x0FFC0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [e]
0x00FF0000,0x01FF0000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x3FFE0000,0x3FFE0000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x03C00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [f]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07FF0000,0x1FFF0000,0x3E3F0000,0x3C1F0000,0x7C0F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x780F0000,0x7C0F0000,0x3C1F0000,0x3E3F0000,0x1FFF0000,0x07FF0000,0x000F0000,0x380F0000,0x3C1F0000,0x3E3E0000,0x1FFC0000,0x07F00000, // Ascii = [g]
0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3FF80000,0x3FFC0000,0x3F3E0000,0x3E1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [h]
0x01E00000,0x01E00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x3FE00000,0x3FE00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [i]
0x01F00000,0x01F00000,0x01F00000,0x00000000,0x00000000,0x00000000,0x3FE00000,0x3FE00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x7FC00000,0x7F800000, // Ascii = [j]
0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C1F0000,0x3C3C0000,0x3CF80000,0x3DF00000,0x3FE00000,0x3FC00000,0x3FE00000,0x3FF00000,0x3EF00000,0x3C780000,0x3C7C0000,0x3C3E0000,0x3C1E0000,0x3C0F0000,0x3C0F8000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [k]
0x3FE00000,0x3FE00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [l]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x7FDF0000,0x7FFF0000,0x7DFF8000,0x7DF78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x79E78000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [m]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3FF80000,0x3FFC0000,0x3F3E0000,0x3E1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x3C1E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [n]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07F00000,0x1FFC0000,0x3E3E0000,0x3C1F0000,0x7C0F0000,0x780F0000,0x780F0000,0x780F8000,0x780F0000,0x780F0000,0x7C0F0000,0x3C1F0000,0x3E3E0000,0x1FFC0000,0x07F00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [o]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3FF80000,0x3FFC0000,0x3F3E0000,0x3E1F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3C0F0000,0x3E1F0000,0x3F3E0000,0x3FFC0000,0x3FF00000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000,0x3C000000, // Ascii = [p]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07FE0000,0x1FFE0000,0x3E7E0000,0x3C1E0000,0x7C1E0000,0x781E0000,0x780E0000,0x780E0000,0x780E0000,0x780E0000,0x7C1E0000,0x3C1E0000,0x3E3E0000,0x1FFE0000,0x07FE0000,0x001E0000,0x001E0000,0x001E0000,0x001E0000,0x001E0000,0x001E0000, // Ascii = [q]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x1CFC0000,0x3FFF0000,0x1F8F0000,0x1F060000,0x1F000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x1E000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [r]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x07F00000,0x1FFC0000,0x3E3E0000,0x3C1E0000,0x3C060000,0x3F000000,0x1FF00000,0x0FFC0000,0x00FE0000,0x001F0000,0x3C1F0000,0x3C1E0000,0x3E3E0000,0x1FFC0000,0x07F80000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [s]
0x00000000,0x03800000,0x07800000,0x07800000,0x07800000,0x07800000,0x7FFC0000,0x7FFC0000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07800000,0x07C60000,0x03FE0000,0x01FE0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [t]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3C1F0000,0x3E3F0000,0x1FFF0000,0x0FEF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [u]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x780F8000,0x7C0F0000,0x3C0F0000,0x3C1E0000,0x1E1E0000,0x1E3C0000,0x1E3C0000,0x0F3C0000,0x0F780000,0x07F80000,0x07F00000,0x07F00000,0x03F00000,0x03E00000,0x01E00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [v]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xE1E3C000,0xF3E3C000,0xF3E38000,0xF3F78000,0xF3F78000,0x77F78000,0x7FF78000,0x7FFF0000,0x7F7F0000,0x3F7F0000,0x3F3F0000,0x3F3E0000,0x3F3E0000,0x1E3E0000,0x1E3E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [w]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x7C1F0000,0x3E3E0000,0x1F3C0000,0x0F7C0000,0x07F80000,0x07F00000,0x03E00000,0x03E00000,0x07F00000,0x07F80000,0x0F780000,0x1F3C0000,0x1E3E0000,0x3C1E0000,0x7C0F8000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [x]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x780F8000,0x780F0000,0x3C0F0000,0x3C1E0000,0x3E1E0000,0x1E3E0000,0x1E3C0000,0x0F3C0000,0x0F780000,0x0FF80000,0x07F80000,0x07F00000,0x03F00000,0x03E00000,0x03E00000,0x01E00000,0x03C00000,0x03C00000,0x07800000,0x3F800000,0x3E000000, // Ascii = [y]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3FFF0000,0x3FFF0000,0x003E0000,0x003C0000,0x00780000,0x00F00000,0x01F00000,0x03E00000,0x07C00000,0x0F800000,0x1F000000,0x1E000000,0x3C000000,0x7FFF0000,0x7FFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [z]
0x007C0000,0x00FC0000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01C00000,0x03C00000,0x0F800000,0x0F000000,0x0F800000,0x03C00000,0x01C00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x01E00000,0x00FC0000,0x007C0000, // Ascii = [{]
0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000, // Ascii = [|]
0x0F800000,0x0FC00000,0x03C00000,0x03C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01E00000,0x01E00000,0x01E00000,0x00F80000,0x00780000,0x00F80000,0x01E00000,0x01E00000,0x01E00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x01C00000,0x03C00000,0x03C00000,0x0FC00000,0x0F800000, // Ascii = [}]
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3F818000,0x7FE78000,0x73FF8000,0x607E0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // Ascii = [~]
};


//--------------------------------------------------------------
// Font-Struktur
//--------------------------------------------------------------
UB_Font32 Arial_18x27 = {
  Arial_18x27_Table, // Font-Daten
  18,               // Breite eines Zeichens (in Pixel)
  27,              // Hoehe eines Zeichens  (in Pixel)
};

