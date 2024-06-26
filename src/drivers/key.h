#pragma once

#include "types.h"

typedef enum {
	KEY_NONE = 0,
	KEY_0,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	KEY_A_Ring,
	KEY_A_Umlaut,
	KEY_A,
	KEY_Acute,
	KEY_Alt,
	KEY_AltGr,
	KEY_Ampersand,
	KEY_ArrowDown,
	KEY_ArrowLeft,
	KEY_ArrowRight,
	KEY_ArrowUp,
	KEY_Asterix,
	KEY_B,
	KEY_Backspace,
	KEY_BackTick,
	KEY_C,
	KEY_Calculator,
	KEY_CapsLock,
	KEY_Caret,
	KEY_CloseBrace,
	KEY_CloseBracet,
	KEY_CloseCurlyBrace,
	KEY_Colon,
	KEY_Comma,
	KEY_Currency,
	KEY_D,
	KEY_Delete,
	KEY_DoubleQuote,
	KEY_E,
	KEY_End,
	KEY_Enter,
	KEY_Equals,
	KEY_Escape,
	KEY_ExclamationMark,
	KEY_F,
	KEY_F1,
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_F11,
	KEY_G,
	KEY_GreaterThan,
	KEY_H,
	KEY_Half,
	KEY_Hashtag,
	KEY_Home,
	KEY_Hyphen,
	KEY_I,
	KEY_Insert,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_LeftCtrl,
	KEY_LeftShift,
	KEY_LessThan,
	KEY_M,
	KEY_MediaNext,
	KEY_MediaPlayPause,
	KEY_MediaPrevious,
	KEY_MediaStop,
	KEY_N,
	KEY_NumLock,
	KEY_Numpad0,
	KEY_Numpad1,
	KEY_Numpad2,
	KEY_Numpad3,
	KEY_Numpad4,
	KEY_Numpad5,
	KEY_Numpad6,
	KEY_Numpad7,
	KEY_Numpad8,
	KEY_Numpad9,
	KEY_NumpadDecimal,
	KEY_NumpadDivide,
	KEY_NumpadEnter,
	KEY_NumpadMinus,
	KEY_NumpadMultiply,
	KEY_NumpadPlus,
	KEY_O_Umlaut,
	KEY_O,
	KEY_OpenBrace,
	KEY_OpenBracet,
	KEY_OpenCurlyBrace,
	KEY_P,
	KEY_PageDown,
	KEY_PageUp,
	KEY_Percent,
	KEY_Period,
	KEY_Plus,
	KEY_Q,
	KEY_QuestionMark,
	KEY_R,
	KEY_RightCtrl,
	KEY_RightShift,
	KEY_S,
	KEY_Section,
	KEY_Semicolon,
	KEY_SingleQuote,
	KEY_Slash,
	KEY_Space,
	KEY_Super,
	KEY_T,
	KEY_Tab,
	KEY_TwoDots,
	KEY_U,
	KEY_Underscore,
	KEY_V,
	KEY_VolumeDown,
	KEY_VolumeMute,
	KEY_VolumeUp,
	KEY_W,
	KEY_X,
	KEY_Y,
	KEY_Z,
} key_t;

#define KEY_EVENT_MODIFIERS_SHIFT		(1 << 0)
#define KEY_EVENT_MODIFIERS_CONTROL		(1 << 1)
#define KEY_EVENT_MODIFIERS_CAPS_LOCK	(1 << 2)
#define KEY_EVENT_MODIFIERS_RELEASED	(1 << 3)

typedef struct {
	key_t key;
	u8 modifiers;
} key_event_t;

const char* key_to_utf8(key_event_t*);
