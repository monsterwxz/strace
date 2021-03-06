/* Generated by ./xlat/gen.sh from ./xlat/evdev_leds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LED_NUML) || (defined(HAVE_DECL_LED_NUML) && HAVE_DECL_LED_NUML)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_NUML) == (0x00), "LED_NUML != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_NUML 0x00
#endif
#if defined(LED_CAPSL) || (defined(HAVE_DECL_LED_CAPSL) && HAVE_DECL_LED_CAPSL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_CAPSL) == (0x01), "LED_CAPSL != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_CAPSL 0x01
#endif
#if defined(LED_SCROLLL) || (defined(HAVE_DECL_LED_SCROLLL) && HAVE_DECL_LED_SCROLLL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_SCROLLL) == (0x02), "LED_SCROLLL != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_SCROLLL 0x02
#endif
#if defined(LED_COMPOSE) || (defined(HAVE_DECL_LED_COMPOSE) && HAVE_DECL_LED_COMPOSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_COMPOSE) == (0x03), "LED_COMPOSE != 0x03");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_COMPOSE 0x03
#endif
#if defined(LED_KANA) || (defined(HAVE_DECL_LED_KANA) && HAVE_DECL_LED_KANA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_KANA) == (0x04), "LED_KANA != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_KANA 0x04
#endif
#if defined(LED_SLEEP) || (defined(HAVE_DECL_LED_SLEEP) && HAVE_DECL_LED_SLEEP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_SLEEP) == (0x05), "LED_SLEEP != 0x05");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_SLEEP 0x05
#endif
#if defined(LED_SUSPEND) || (defined(HAVE_DECL_LED_SUSPEND) && HAVE_DECL_LED_SUSPEND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_SUSPEND) == (0x06), "LED_SUSPEND != 0x06");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_SUSPEND 0x06
#endif
#if defined(LED_MUTE) || (defined(HAVE_DECL_LED_MUTE) && HAVE_DECL_LED_MUTE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_MUTE) == (0x07), "LED_MUTE != 0x07");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_MUTE 0x07
#endif
#if defined(LED_MISC) || (defined(HAVE_DECL_LED_MISC) && HAVE_DECL_LED_MISC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_MISC) == (0x08), "LED_MISC != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_MISC 0x08
#endif
#if defined(LED_MAIL) || (defined(HAVE_DECL_LED_MAIL) && HAVE_DECL_LED_MAIL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_MAIL) == (0x09), "LED_MAIL != 0x09");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_MAIL 0x09
#endif
#if defined(LED_CHARGING) || (defined(HAVE_DECL_LED_CHARGING) && HAVE_DECL_LED_CHARGING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_CHARGING) == (0x0a), "LED_CHARGING != 0x0a");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_CHARGING 0x0a
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_leds in mpers mode

# else

static
const struct xlat evdev_leds[] = {
 [LED_NUML] = XLAT(LED_NUML),
 [LED_CAPSL] = XLAT(LED_CAPSL),
 [LED_SCROLLL] = XLAT(LED_SCROLLL),
 [LED_COMPOSE] = XLAT(LED_COMPOSE),
 [LED_KANA] = XLAT(LED_KANA),
 [LED_SLEEP] = XLAT(LED_SLEEP),
 [LED_SUSPEND] = XLAT(LED_SUSPEND),
 [LED_MUTE] = XLAT(LED_MUTE),
 [LED_MISC] = XLAT(LED_MISC),
 [LED_MAIL] = XLAT(LED_MAIL),
 [LED_CHARGING] = XLAT(LED_CHARGING),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
