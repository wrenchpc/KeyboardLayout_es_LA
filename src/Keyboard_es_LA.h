/*
  Keyboard_es_LA.h

  2026, WrenchPC
*/

#ifndef KEYBOARD_ES_LA_h
#define KEYBOARD_ES_LA_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Keyboard

// es_LA keys
#define KEY_MASCULINE_ORDINAL    (136+0x35)
#define KEY_INVERTED_EXCLAMATION (136+0x2e)
#define KEY_GRAVE                (136+0x2f)
#define KEY_N_TILDE              (136+0x33)
#define KEY_ACUTE                (136+0x34)
#define KEY_C_CEDILLA            (136+0x31)

#endif
#endif
