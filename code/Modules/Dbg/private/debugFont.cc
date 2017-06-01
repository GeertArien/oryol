//------------------------------------------------------------------------------
//  debugFont.cc
//------------------------------------------------------------------------------
#include "Pre.h"
#include "Core/Types.h"

namespace Oryol {
namespace _priv {

// this is the KC85/4 system font
// each character is made of an 8x8 matrix
const char *kc85_4_Font =
    //-- 00: dummy
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "X------X"
    "XXXXXXXX"
    
    //-- 01: backspace
    "--------"
    "--------"
    "--X---X-"
    "-XXX--X-"
    "--X---X-"
    "--XXXXX-"
    "--------"
    "--------"
    
    //-- 02: delete line
    "--------"
    "--------"
    "---X--X-"
    "--XX--X-"
    "-XXXXXX-"
    "--XX--X-"
    "---X--X-"
    "--------"
    
    //-- 03: break
    "-XXXXXX-"
    "X------X"
    "X-XXX--X"
    "X-X--X-X"
    "X-XXX--X"
    "X-X--X-X"
    "X-XXX--X"
    "X------X"
    
    //-- 04: unused
    "-X-X-X-X"
    "XXXXXXXX"
    "-X-X-X-X"
    "XXXXXXXX"
    "-X-X-X-X"
    "XXXXXXXX"
    "-X-X-X-X"
    "XXXXXXXX"

    //-- 05: unused
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    "X-X-X-X-"
    
    //-- 06: unused
    "XXXXXXXX"
    "--------"
    "XXXXXXXX"
    "--------"
    "XXXXXXXX"
    "--------"
    "XXXXXXXX"
    "--------"

    //-- 07: BEEP
    "--------"
    "--------"
    "--XXXX--"
    "-X----X-"
    "-X----X-"
    "-XXXXXX-"
    "--------"
    "--------"
    
    //-- 08: cursor left
    "--------"
    "---X----"
    "--XX----"
    "-XXXXXX-"
    "--XX----"
    "---X----"
    "--------"
    "--------"
    
    //-- 09: cursor right
    "--------"
    "----X---"
    "----XX--"
    "-XXXXXX-"
    "----XX--"
    "----X---"
    "--------"
    "--------"
    
    //-- 0A: cursor down
    "--------"
    "---X----"
    "---X----"
    "---X----"
    "-XXXXX--"
    "--XXX---"
    "---X----"
    "--------"
    
    //-- 0B: cursor up
    "----X---"
    "---XXX--"
    "--XXXXX-"
    "----X---"
    "----X---"
    "----X---"
    "----X---"
    "--------"
    
    //-- 0C: clear screen
    "--XXX---"
    "--XX----"
    "--X-X---"
    "----X---"
    "----X---"
    "----X---"
    "--XXXXX-"
    "--------"
    
    //-- 0D: ENTER
    "--------"
    "--------"
    "---X--X-"
    "--XX--X-"
    "-XXXXXX-"
    "--XX----"
    "---X----"
    "--------"
    
    //-- 0E: unused
    "X-X-X-X-"
    "-X-X-X-X"
    "X-X-X-X-"
    "-X-X-X-X"
    "X-X-X-X-"
    "-X-X-X-X"
    "X-X-X-X-"
    "-X-X-X-X"
    
    //-- 0F: CALL SPECIAL
    "--XXXXX-"
    "-XXXXX--"
    "-XXXXX--"
    "--XXXXX-"
    "--XXXXX-"
    "-XXXXX--"
    "XXXXX---"
    "XXXXX---"
    
    //-- 10: HOME
    "--XXX---"
    "--XX----"
    "--X-X---"
    "-----X--"
    "-----X--"
    "-----X--"
    "-----X--"
    "--------"
    
    //-- 11: PAGE UP
    "-XXXXXXX"
    "----X---"
    "---XXX--"
    "--X-X-X-"
    "----X---"
    "----X---"
    "----X---"
    "--------"
    
    //-- 12: PAGE DOWN
    "--------"
    "----X---"
    "----X---"
    "----X---"
    "--X-X-X-"
    "---XXX--"
    "----X---"
    "-XXXXXXX"
    
    //-- 13: STOP
    "-XXXXXX-"
    "X------X"
    "X--XXX-X"
    "X-X----X"
    "X-XXX--X"
    "X----X-X"
    "X----X-X"
    "X-XXX--X"
    
    //-- 14: click on/off
    "--------"
    "--XXXX--"
    "-X----X-"
    "-X-XX-X-"
    "-X-XX-X-"
    "-X----X-"
    "--XXXX--"
    "--------"
    
    //-- 15: unused
    "X---X---"
    "-X---X--"
    "--X---X-"
    "---X---X"
    "X---X---"
    "-X---X--"
    "--X---X-"
    "---X---X"
    
    //-- 16: SHIFT LOCK
    "--------"
    "-XXXXXXX"
    "--X---X-"
    "-XXX--X-"
    "--X--XXX"
    "--X---X-"
    "-XXXXXXX"
    "--------"
    
    //-- 17: unused
    "---X---X"
    "--X---X-"
    "-X---X--"
    "X---X---"
    "---X---X"
    "--X---X-"
    "-X---X--"
    "X---X---"
    
    //-- 18: cursor to end of line
    "--------"
    "-------X"
    "----X--X"
    "----XX-X"
    "-XXXXXXX"
    "----XX-X"
    "----X--X"
    "-------X"
    
    //-- 19: cursor to start of line
    "--------"
    "X--X----"
    "X-XX----"
    "XXXXXXX-"
    "X-XX----"
    "X--X----"
    "--------"
    "--------"
    
    //-- 1A: insert
    "--------"
    "----X---"
    "-XXXXX--"
    "-----XX-"
    "-XXXXX--"
    "----X---"
    "--------"
    "--------"
    
    //-- 1B: ESC
    "XX--XX--"
    "XX--XX--"
    "--XX--XX"
    "--XX--XX"
    "XX--XX--"
    "XX--XX--"
    "--XX--XX"
    "--XX--XX"
    
    //-- 1C: LIST
    "-XXXXXX-"
    "X------X"
    "X-X----X"
    "X-X----X"
    "X-X----X"
    "X-X----X"
    "X-XXXX-X"
    "X------X"
    
    //-- 1D: RUN
    "-XXXXXX-"
    "X------X"
    "X-XXX--X"
    "X-X--X-X"
    "X-XXX--X"
    "X-X--X-X"
    "X-X--X-X"
    "X------X"
    
    //-- 1E: CONT
    "-XXXXXX-"
    "X------X"
    "X--XX--X"
    "X-X----X"
    "X-X----X"
    "X-X----X"
    "X--XX--X"
    "X------X"
    
    //-- 1F: DEL
    "--------"
    "---X----"
    "--XXXXX-"
    "-XX-----"
    "--XXXXX-"
    "---X----"
    "--------"
    "--------"
    
    //-- 20: Space
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 21: !
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--------"
    "--XX----"
    "--------"
    
    //-- 22: "
    "-XXX-XXX"
    "--XX--XX"
    "-XX--XX-"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 23: #
    "--XX-XX-"
    "--XX-XX-"
    "XXXXXXX-"
    "-XX-XX--"
    "XXXXXXX-"
    "XX--XX--"
    "XX--XX--"
    "--------"
    
    //-- 24: $
    "---XX---"
    "--XXXXX-"
    "-XX-XX--"
    "--XXXXX-"
    "---XX-XX"
    "---XX-XX"
    "-XXXXXX-"
    "---XX---"
    
    //-- 25: %
    "--------"
    "XX---XX-"
    "XX--XX--"
    "---XX---"
    "--XX----"
    "-XX--XX-"
    "XX---XX-"
    "--------"
    
    //-- 26: &
    "--XXX---"
    "-XX-XX--"
    "--XXX---"
    "-XXX-XX-"
    "XX-XXX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 27: '
    "---XXX--"
    "----XX--"
    "---XX---"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 28: (
    "---XX---"
    "--XX----"
    "-XX-----"
    "-XX-----"
    "-XX-----"
    "--XX----"
    "---XX---"
    "--------"
    
    //-- 29: )
    "-XX-----"
    "--XX----"
    "---XX---"
    "---XX---"
    "---XX---"
    "--XX----"
    "-XX-----"
    "--------"
    
    //-- 2A: *
    "--------"
    "-XX--XX-"
    "--XXXX--"
    "XXXXXXXX"
    "--XXXX--"
    "-XX--XX-"
    "--------"
    "--------"
    
    //-- 2B: +
    "--------"
    "--XX----"
    "--XX----"
    "XXXXXX--"
    "--XX----"
    "--XX----"
    "--------"
    "--------"
    
    //-- 2C: ,
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "---XXX--"
    "----XX--"
    "---XX---"
    
    //-- 2D: -
    "--------"
    "--------"
    "--------"
    "XXXXXXX-"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 2E: .
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--XX----"
    "--XX----"
    "--------"
    
    //-- 2F: /
    "-----XX-"
    "----XX--"
    "---XX---"
    "--XX----"
    "-XX-----"
    "XX------"
    "X-------"
    "--------"
    
    //-- 30: 0
    "-XXXXX--"
    "XX---XX-"
    "XX--XXX-"
    "XX-XXXX-"
    "XXXX-XX-"
    "XXX--XX-"
    "-XXXXX--"
    "--------"
    
    //-- 31: 1
    "--XX----"
    "-XXX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "XXXXXX--"
    "--------"
    
    //-- 32: 2
    "-XXXX---"
    "XX--XX--"
    "----XX--"
    "--XXX---"
    "-XX-----"
    "XX--XX--"
    "XXXXXX--"
    "--------"
    
    //-- 33: 3
    "XXXXXX--"
    "---XX---"
    "--XX----"
    "-XXXX---"
    "----XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 34: 4
    "---XXX--"
    "--XXXX--"
    "-XX-XX--"
    "XX--XX--"
    "XXXXXXX-"
    "----XX--"
    "---XXXX-"
    "--------"
    
    //-- 35: 5
    "XXXXXX--"
    "XX------"
    "XXXXX---"
    "----XX--"
    "----XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 36: 6
    "--XXX---"
    "-XX-----"
    "XX------"
    "XXXXX---"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 37: 7
    "XXXXXX--"
    "XX--XX--"
    "----XX--"
    "---XX---"
    "--XX----"
    "--XX----"
    "--XX----"
    "--------"
    
    //-- 38: 8
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 39: 9
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "-XXXXX--"
    "----XX--"
    "---XX---"
    "--XX----"
    "--------"
    
    //-- 3A: :
    "--------"
    "--------"
    "--XX----"
    "--XX----"
    "--------"
    "--XX----"
    "--XX----"
    "--------"
    
    //-- 3B: ;
    "--------"
    "--------"
    "--XX----"
    "--XX----"
    "--------"
    "--XX----"
    "--XX----"
    "-XX-----"
    
    //-- 3C: <
    "---XX---"
    "--XX----"
    "-XX-----"
    "XX------"
    "-XX-----"
    "--XX----"
    "---XX---"
    "--------"
    
    //-- 3D: =
    "--------"
    "--------"
    "XXXXXX--"
    "--------"
    "XXXXXX--"
    "--------"
    "--------"
    "--------"
    
    //-- 3E: >
    "-XX-----"
    "--XX----"
    "---XX---"
    "----XX--"
    "---XX---"
    "--XX----"
    "-XX-----"
    "--------"
    
    //-- 3F: ?
    "-XXXX---"
    "XX--XX--"
    "----XX--"
    "---XX---"
    "--XX----"
    "--------"
    "--XX----"
    "--------"
    
    //-- 40: @
    "-XXXXX--"
    "XX---XX-"
    "XX-XXXX-"
    "XX-XXXX-"
    "XX-XXXX-"
    "XX------"
    "-XXXX---"
    "--------"
    
    //-- 41: A
    "--XX----"
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "XXXXXX--"
    "XX--XX--"
    "XX--XX--"
    "--------"
    
    //-- 42: B
    "XXXXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XXXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "XXXXXX--"
    "--------"
    
    //-- 43: C
    "--XXXX--"
    "-XX--XX-"
    "XX------"
    "XX------"
    "XX------"
    "-XX--XX-"
    "--XXXX--"
    "--------"
    
    //-- 44: D
    "XXXXX---"
    "-XX-XX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XX--XX-"
    "-XX-XX--"
    "XXXXX---"
    "--------"
    
    //-- 45: E
    "XXXXXXX-"
    "-XX---X-"
    "-XX-X---"
    "-XXXX---"
    "-XX-X---"
    "-XX---X-"
    "XXXXXXX-"
    "--------"
    
    //-- 46: F
    "XXXXXXX-"
    "-XX---X-"
    "-XX-X---"
    "-XXXX---"
    "-XX-X---"
    "-XX-----"
    "XXXX----"
    "--------"
    
    //-- 47: G
    "--XXXX--"
    "-XX--XX-"
    "XX------"
    "XX------"
    "XX--XXX-"
    "-XX--XX-"
    "--XXXX--"
    "--------"
    
    //-- 48: H
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "XXXXXX--"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "--------"
    
    //-- 49: I
    "-XXXX---"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "-XXXX---"
    "--------"
    
    //-- 4A: J
    "---XXXX-"
    "----XX--"
    "----XX--"
    "----XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 4B: K
    "XXX--XX-"
    "-XX--XX-"
    "-XX-XX--"
    "-XXX----"
    "-XX-XX--"
    "-XX--XX-"
    "XXX--XX-"
    "--------"
    
    //-- 4C: L
    "XXXX----"
    "-XX-----"
    "-XX-----"
    "-XX-----"
    "-XX---X-"
    "-XX--XX-"
    "XXXXXXX-"
    "--------"
    
    //-- 4D: M
    "XX---XX-"
    "XXX-XXX-"
    "XXXXXXX-"
    "XX-X-XX-"
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "--------"
    
    //-- 4E: N
    "XX---XX-"
    "XXX--XX-"
    "XXXX-XX-"
    "XX-XXXX-"
    "XX--XXX-"
    "XX---XX-"
    "XX---XX-"
    "--------"
    
    //-- 4F: O
    "--XXX---"
    "-XX-XX--"
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "-XX-XX--"
    "--XXX---"
    "--------"
    
    //-- 50: P
    "XXXXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XXXXX--"
    "-XX-----"
    "-XX-----"
    "XXXX----"
    "--------"
    
    //-- 51: Q
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "XX-XXX--"
    "-XXXX---"
    "---XXX--"
    "--------"
    
    //-- 52: R
    "XXXXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XXXXX--"
    "-XX-XX--"
    "-XX--XX-"
    "XXX--XX-"
    "--------"
    
    //-- 53: S
    "-XXXXX--"
    "XX---XX-"
    "XXXX----"
    "--XXXX--"
    "----XXX-"
    "XX---XX-"
    "-XXXXX--"
    "--------"
    
    //-- 54: T
    "XXXXXX--"
    "X-XX-X--"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "-XXXX---"
    "--------"
    
    //-- 55: U
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "-XXXXX--"
    "--------"
    
    //-- 56: V
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "-XXXX---"
    "--XX----"
    "--XX----"
    "--------"
    
    //-- 57: W
    "XX---XX-"
    "XX---XX-"
    "XX---XX-"
    "XX-X-XX-"
    "XXXXXXX-"
    "XXX-XXX-"
    "XX---XX-"
    "--------"
    
    //-- 58: X
    "XX---XX-"
    "XX---XX-"
    "-XX-XX--"
    "--XXX---"
    "-XX-XX--"
    "XX---XX-"
    "XX---XX-"
    "--------"
    
    //-- 59: Y
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--XX----"
    "--XX----"
    "-XXXX---"
    "--------"
    
    //-- 5A: Z
    "XXXXXXX-"
    "XX---XX-"
    "X---XX--"
    "---XX---"
    "--XX--X-"
    "-XX--XX-"
    "XXXXXXX-"
    "--------"
    
    //-- 5B: full
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"
    "XXXXXXXX"

    //-- 5C: ??
    "---XX---"
    "---XX---"
    "---XX---"
    "---XX---"
    "---XX---"
    "---XX---"
    "---XX---"
    "--------"
    
    //-- 5D: negate
    "--------"
    "XXXXXXX-"
    "-----XX-"
    "-----XX-"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 5E: exponent
    "---X----"
    "--XXX---"
    "-XX-XX--"
    "XX---XX-"
    "--------"
    "--------"
    "--------"
    "--------"
    
    //-- 5F: ??
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "--------"
    "XXXXXXXX"
    
    //-- 60: Copyright
    "--XXXX--"
    "-X----X-"
    "X--XX--X"
    "X-X----X"
    "X-X----X"
    "X--XX--X"
    "-X----X-"
    "--XXXX--"
    
    //-- 61: a
    "--------"
    "--------"
    "-XXXX---"
    "----XX--"
    "-XXXXX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 62: b
    "XXX-----"
    "-XX-----"
    "-XXXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XX--XX-"
    "XX-XXX--"
    "--------"
    
    //-- 63: c
    "--------"
    "--------"
    "-XXXX---"
    "XX--XX--"
    "XX------"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 64: d
    "---XXX--"
    "----XX--"
    "-XXXXX--"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 65: e
    "--------"
    "--------"
    "-XXXX---"
    "XX--XX--"
    "XXXXXX--"
    "XX------"
    "-XXXX---"
    "--------"
    
    //-- 66: f
    "--XXX---"
    "-XX-XX--"
    "-XX-----"
    "XXXX----"
    "-XX-----"
    "-XX-----"
    "XXXX----"
    "--------"
    
    //-- 67: g
    "--------"
    "--------"
    "-XXX-XX-"
    "XX--XX--"
    "XX--XX--"
    "-XXXXX--"
    "----XX--"
    "XXXXX---"
    
    //-- 68: h
    "XXX-----"
    "-XX-----"
    "-XX-XX--"
    "-XXX-XX-"
    "-XX--XX-"
    "-XX--XX-"
    "XXX--XX-"
    "--------"
    
    //-- 69: i
    "--XX----"
    "--------"
    "-XXX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "XXXXXX--"
    "--------"
    
    //-- 6A: j
    "----XX--"
    "--------"
    "---XXX--"
    "----XX--"
    "----XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    
    //-- 6B: k
    "XXX-----"
    "-XX-----"
    "-XX--XX-"
    "-XX-XX--"
    "-XXXX---"
    "-XX-XX--"
    "XXX--XX-"
    "--------"
    
    //-- 6C: l
    "-XXX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "--XX----"
    "XXXXXX--"
    "--------"
    
    //-- 6D: m
    "--------"
    "--------"
    "XX--XX--"
    "XXXXXXX-"
    "XXXXXXX-"
    "XX-X-XX-"
    "XX---XX-"
    "--------"
    
    //-- 6E: n
    "--------"
    "--------"
    "XXXXX---"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "--------"
    
    //-- 6F: o
    "--------"
    "--------"
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 70: p
    "--------"
    "--------"
    "XX-XXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XXXXX--"
    "-XX-----"
    "XXXX----"
    
    //-- 71: q
    "--------"
    "--------"
    "-XXX-XX-"
    "XX--XX--"
    "XX--XX--"
    "-XXXXX--"
    "----XX--"
    "---XXXX-"
    
    //-- 72: r
    "--------"
    "--------"
    "XX-XXX--"
    "-XXX-XX-"
    "-XX--XX-"
    "-XX-----"
    "XXXX----"
    "--------"
    
    //-- 73: s
    "--------"
    "--------"
    "-XXXXX--"
    "XX------"
    "-XXXX---"
    "----XX--"
    "XXXXX---"
    "--------"
    
    //-- 74: t
    "---X----"
    "--XX----"
    "-XXXXX--"
    "--XX----"
    "--XX----"
    "--XX-X--"
    "---XX---"
    "--------"
    
    //-- 75: u
    "--------"
    "--------"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 76: v
    "--------"
    "--------"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--XX----"
    "--------"
    
    //-- 77: w
    "--------"
    "--------"
    "XX---XX-"
    "XX-X-XX-"
    "XXXXXXX-"
    "XXXXXXX-"
    "-XX-XX--"
    "--------"
    
    //-- 78: x
    "--------"
    "--------"
    "XX---XX-"
    "-XX-XX--"
    "--XXX---"
    "-XX-XX--"
    "XX---XX-"
    "--------"
    
    //-- 79: y
    "--------"
    "--------"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXXX--"
    "----XX--"
    "XXXXX---"
    
    //-- 7A: z
    "--------"
    "--------"
    "XXXXXX--"
    "X--XX---"
    "--XX----"
    "-XX--X--"
    "XXXXXX--"
    "--------"
    
    //-- 7B: ä
    "-XX-XX--"
    "--------"
    "-XXXX---"
    "----XX--"
    "-XXXXX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 7C: ö
    "XX--XX--"
    "--------"
    "-XXXX---"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXXX---"
    "--------"
    
    //-- 7D: ü
    "XX--XX--"
    "--------"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "XX--XX--"
    "-XXX-XX-"
    "--------"
    
    //-- 7E: ß
    "--XXXX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XX-XX--"
    "-XX--XX-"
    "-XX--XX-"
    "-XX-XX--"
    "XXXX----"
    
    //-- 7F: ??
    "XXXXXXXX"
    "X------X"
    "X------X"
    "X------X"
    "X------X"
    "X------X"
    "X------X"
    "XXXXXXXX";

} // namespace _priv
} // namespace Oryol