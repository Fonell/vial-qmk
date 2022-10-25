
/* keyboard uid */
#define VIAL_KEYBOARD_UID {0xF0, 0x67, 0x2F, 0x54, 0x23, 0xB3, 0x7B, 0x55}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

/* default layer count */
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/* caps word */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* mod tap */
#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT // Prevent rollover triggering mods
#define TAPPING_FORCE_HOLD // Enable switch from tap to hold

/* auto shift */
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM

/* mouse keys */
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64



