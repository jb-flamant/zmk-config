#pragma once

#include <dt-bindings/zmk/keys.h>

// Platform-specific modifier
#ifdef MACOS
  #define CMD(key) LG(key)
#else
  #define CMD(key) LC(key)
#endif

// Layout-specific aliases
#ifdef KB_LAYOUT_AZERTY
  #define SHIFTED_NUMBERS
  #include "aliases/azerty.h"
#elif defined(KB_LAYOUT_BEPO)
  #define SHIFTED_NUMBERS
  #include "aliases/bepo.h"
#elif defined(KB_LAYOUT_BEPOLAR)
  #define SHIFTED_NUMBERS
  #include "aliases/bepolar.h"
#elif defined(KB_LAYOUT_DVORAK)
  #include "aliases/dvorak.h"
#elif defined(KB_LAYOUT_ERGOL)
  #include "aliases/ergol.h"
#elif defined(KB_LAYOUT_ERGLACE)
  #include "aliases/erglace.h"
#elif defined(KB_LAYOUT_QWERTY_INTL)
  #include "aliases/qwerty_intl.h"
#elif defined(KB_LAYOUT_QWERTY_LAFAYETTE)
  #include "aliases/qwerty_lafayette.h"
#else
  #include "aliases/qwerty.h"
#endif

// Number aliases (AZERTY and Bépo use Shift+number to type digits)
#ifdef SHIFTED_NUMBERS
  #define S_N1  &kp LS(N1)
  #define S_N2  &kp LS(N2)
  #define S_N3  &kp LS(N3)
  #define S_N4  &kp LS(N4)
  #define S_N5  &kp LS(N5)
  #define S_N6  &kp LS(N6)
  #define S_N7  &kp LS(N7)
  #define S_N8  &kp LS(N8)
  #define S_N9  &kp LS(N9)
  #define S_N0  &kp LS(N0)
#else
  #define S_N1  &kp N1
  #define S_N2  &kp N2
  #define S_N3  &kp N3
  #define S_N4  &kp N4
  #define S_N5  &kp N5
  #define S_N6  &kp N6
  #define S_N7  &kp N7
  #define S_N8  &kp N8
  #define S_N9  &kp N9
  #define S_N0  &kp N0
#endif

// Navigation shortcuts (OS-aware)
#ifdef MACOS
  #define X_PREV &kp LG(LBKT)
  #define X_NEXT &kp LG(RBKT)
#else
  #define X_PREV &kp LA(LEFT)
  #define X_NEXT &kp LA(RIGHT)
#endif

#define X_SHTAB &kp LS(TAB)
