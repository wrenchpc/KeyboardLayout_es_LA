/*
Keyboard_es_LA.*

-WrenchPC

Latin American Spanish keyboard support
Based on a revision of the official Spanish layout
2026
*/

#ifndef KEYBOARD_ES_LATAM_h
#define KEYBOARD_ES_LATAM_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//  Keyboard - special keys LATAM

#define KEY_MASCULINE_ORDINAL    (136+0x35)   // º
#define KEY_INVERTED_EXCLAMATION (136+0x2e)   // ¡
#define KEY_GRAVE                (136+0x2f)   // ` (grave)
#define KEY_N_TILDE              (136+0x33)   // Ñ
#define KEY_ACUTE                (136+0x34)   // ´ (acento agudo)
// #define KEY_C_CEDILLA         (136+0x31)   // Ç → It's not used on LATAM

#endif
#endif
