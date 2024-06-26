#include "ps2_keyboard.h"
#include "utils.h"

void ps2_init_keymap_fi() {
	memory_set((u8*)ps2_keymap_normal, 0x00, sizeof(ps2_keymap_normal));
	ps2_keymap_normal[0x01] = KEY_F9;
	ps2_keymap_normal[0x03] = KEY_F5;
	ps2_keymap_normal[0x04] = KEY_F3;
	ps2_keymap_normal[0x05] = KEY_F1;
	ps2_keymap_normal[0x06] = KEY_F2;
	ps2_keymap_normal[0x07] = KEY_F11;
	ps2_keymap_normal[0x09] = KEY_F10;
	ps2_keymap_normal[0x0A] = KEY_F8;
	ps2_keymap_normal[0x0B] = KEY_F6;
	ps2_keymap_normal[0x0C] = KEY_F4;
	ps2_keymap_normal[0x0D] = KEY_Tab;
	ps2_keymap_normal[0x0E] = KEY_Section;
	ps2_keymap_normal[0x11] = KEY_Alt;
	ps2_keymap_normal[0x12] = KEY_LeftShift;
	ps2_keymap_normal[0x14] = KEY_LeftCtrl;
	ps2_keymap_normal[0x15] = KEY_Q;
	ps2_keymap_normal[0x16] = KEY_1;
	ps2_keymap_normal[0x1A] = KEY_Z;
	ps2_keymap_normal[0x1B] = KEY_S;
	ps2_keymap_normal[0x1C] = KEY_A;
	ps2_keymap_normal[0x1D] = KEY_W;
	ps2_keymap_normal[0x1E] = KEY_2;
	ps2_keymap_normal[0x21] = KEY_C;
	ps2_keymap_normal[0x22] = KEY_X;
	ps2_keymap_normal[0x23] = KEY_D;
	ps2_keymap_normal[0x24] = KEY_E;
	ps2_keymap_normal[0x25] = KEY_4;
	ps2_keymap_normal[0x26] = KEY_3;
	ps2_keymap_normal[0x29] = KEY_Space;
	ps2_keymap_normal[0x2A] = KEY_V;
	ps2_keymap_normal[0x2B] = KEY_F;
	ps2_keymap_normal[0x2C] = KEY_T;
	ps2_keymap_normal[0x2D] = KEY_R;
	ps2_keymap_normal[0x2E] = KEY_5;
	ps2_keymap_normal[0x31] = KEY_N;
	ps2_keymap_normal[0x32] = KEY_B;
	ps2_keymap_normal[0x33] = KEY_H;
	ps2_keymap_normal[0x34] = KEY_G;
	ps2_keymap_normal[0x35] = KEY_Y;
	ps2_keymap_normal[0x36] = KEY_6;
	ps2_keymap_normal[0x3A] = KEY_M;
	ps2_keymap_normal[0x3B] = KEY_J;
	ps2_keymap_normal[0x3C] = KEY_U;
	ps2_keymap_normal[0x3D] = KEY_7;
	ps2_keymap_normal[0x3E] = KEY_8;
	ps2_keymap_normal[0x41] = KEY_Comma;
	ps2_keymap_normal[0x42] = KEY_K;
	ps2_keymap_normal[0x43] = KEY_I;
	ps2_keymap_normal[0x44] = KEY_O;
	ps2_keymap_normal[0x45] = KEY_0;
	ps2_keymap_normal[0x46] = KEY_9;
	ps2_keymap_normal[0x49] = KEY_Period;
	ps2_keymap_normal[0x4A] = KEY_Hyphen;
	ps2_keymap_normal[0x4B] = KEY_L;
	ps2_keymap_normal[0x4C] = KEY_O_Umlaut;
	ps2_keymap_normal[0x4D] = KEY_P;
	ps2_keymap_normal[0x4E] = KEY_Plus;
	ps2_keymap_normal[0x52] = KEY_A_Umlaut;
	ps2_keymap_normal[0x54] = KEY_A_Ring;
	ps2_keymap_normal[0x55] = KEY_Acute;
	ps2_keymap_normal[0x58] = KEY_CapsLock;
	ps2_keymap_normal[0x59] = KEY_RightShift;
	ps2_keymap_normal[0x59] = KEY_RightShift;
	ps2_keymap_normal[0x5A] = KEY_Enter;
	ps2_keymap_normal[0x5B] = KEY_TwoDots;
	ps2_keymap_normal[0x5D] = KEY_SingleQuote;
	ps2_keymap_normal[0x61] = KEY_LessThan;
	ps2_keymap_normal[0x66] = KEY_Backspace;
	ps2_keymap_normal[0x69] = KEY_Numpad1;
	ps2_keymap_normal[0x6B] = KEY_Numpad4;
	ps2_keymap_normal[0x6C] = KEY_Numpad7;
	ps2_keymap_normal[0x70] = KEY_Numpad0;
	ps2_keymap_normal[0x71] = KEY_NumpadDecimal;
	ps2_keymap_normal[0x72] = KEY_Numpad2;
	ps2_keymap_normal[0x73] = KEY_Numpad5;
	ps2_keymap_normal[0x74] = KEY_Numpad6;
	ps2_keymap_normal[0x75] = KEY_Numpad8;
	ps2_keymap_normal[0x76] = KEY_Escape;
	ps2_keymap_normal[0x77] = KEY_NumLock;
	ps2_keymap_normal[0x78] = KEY_F11;
	ps2_keymap_normal[0x79] = KEY_NumpadPlus;
	ps2_keymap_normal[0x7A] = KEY_Numpad3;
	ps2_keymap_normal[0x7B] = KEY_NumpadMinus;
	ps2_keymap_normal[0x7C] = KEY_NumpadMultiply;
	ps2_keymap_normal[0x7D] = KEY_Numpad9;
	ps2_keymap_normal[0x83] = KEY_F7;

	memory_set((u8*)ps2_keymap_shift, 0x00, sizeof(ps2_keymap_shift));
	ps2_keymap_shift[0x01] = KEY_F9;
	ps2_keymap_shift[0x03] = KEY_F5;
	ps2_keymap_shift[0x04] = KEY_F3;
	ps2_keymap_shift[0x05] = KEY_F1;
	ps2_keymap_shift[0x06] = KEY_F2;
	ps2_keymap_shift[0x07] = KEY_F11;
	ps2_keymap_shift[0x09] = KEY_F10;
	ps2_keymap_shift[0x0A] = KEY_F8;
	ps2_keymap_shift[0x0B] = KEY_F6;
	ps2_keymap_shift[0x0C] = KEY_F4;
	ps2_keymap_shift[0x0D] = KEY_Tab;
	ps2_keymap_shift[0x0E] = KEY_Half;
	ps2_keymap_shift[0x11] = KEY_Alt;
	ps2_keymap_shift[0x12] = KEY_LeftShift;
	ps2_keymap_shift[0x14] = KEY_LeftCtrl;
	ps2_keymap_shift[0x15] = KEY_Q;
	ps2_keymap_shift[0x16] = KEY_ExclamationMark;
	ps2_keymap_shift[0x1A] = KEY_Z;
	ps2_keymap_shift[0x1B] = KEY_S;
	ps2_keymap_shift[0x1C] = KEY_A;
	ps2_keymap_shift[0x1D] = KEY_W;
	ps2_keymap_shift[0x1E] = KEY_DoubleQuote;
	ps2_keymap_shift[0x21] = KEY_C;
	ps2_keymap_shift[0x22] = KEY_X;
	ps2_keymap_shift[0x23] = KEY_D;
	ps2_keymap_shift[0x24] = KEY_E;
	ps2_keymap_shift[0x25] = KEY_Currency;
	ps2_keymap_shift[0x26] = KEY_Hashtag;
	ps2_keymap_shift[0x29] = KEY_Space;
	ps2_keymap_shift[0x2A] = KEY_V;
	ps2_keymap_shift[0x2B] = KEY_F;
	ps2_keymap_shift[0x2C] = KEY_T;
	ps2_keymap_shift[0x2D] = KEY_R;
	ps2_keymap_shift[0x2E] = KEY_Percent;
	ps2_keymap_shift[0x31] = KEY_N;
	ps2_keymap_shift[0x32] = KEY_B;
	ps2_keymap_shift[0x33] = KEY_H;
	ps2_keymap_shift[0x34] = KEY_G;
	ps2_keymap_shift[0x35] = KEY_Y;
	ps2_keymap_shift[0x36] = KEY_Ampersand;
	ps2_keymap_shift[0x3A] = KEY_M;
	ps2_keymap_shift[0x3B] = KEY_J;
	ps2_keymap_shift[0x3C] = KEY_U;
	ps2_keymap_shift[0x3D] = KEY_Slash;
	ps2_keymap_shift[0x3E] = KEY_OpenBracet;
	ps2_keymap_shift[0x41] = KEY_Semicolon;
	ps2_keymap_shift[0x42] = KEY_K;
	ps2_keymap_shift[0x43] = KEY_I;
	ps2_keymap_shift[0x44] = KEY_O;
	ps2_keymap_shift[0x45] = KEY_Equals;
	ps2_keymap_shift[0x46] = KEY_CloseBracet;
	ps2_keymap_shift[0x49] = KEY_Colon;
	ps2_keymap_shift[0x4A] = KEY_Underscore;
	ps2_keymap_shift[0x4B] = KEY_L;
	ps2_keymap_shift[0x4C] = KEY_O_Umlaut;
	ps2_keymap_shift[0x4D] = KEY_P;
	ps2_keymap_shift[0x4E] = KEY_QuestionMark;
	ps2_keymap_shift[0x52] = KEY_A_Umlaut;
	ps2_keymap_shift[0x54] = KEY_A_Ring;
	ps2_keymap_shift[0x55] = KEY_BackTick;
	ps2_keymap_shift[0x58] = KEY_CapsLock;
	ps2_keymap_shift[0x59] = KEY_RightShift;
	ps2_keymap_shift[0x59] = KEY_RightShift;
	ps2_keymap_shift[0x5A] = KEY_Enter;
	ps2_keymap_shift[0x5B] = KEY_Caret;
	ps2_keymap_shift[0x5D] = KEY_Asterix;
	ps2_keymap_shift[0x61] = KEY_GreaterThan;
	ps2_keymap_shift[0x66] = KEY_Backspace;
	ps2_keymap_shift[0x69] = KEY_Numpad1;
	ps2_keymap_shift[0x6B] = KEY_Numpad4;
	ps2_keymap_shift[0x6C] = KEY_Numpad7;
	ps2_keymap_shift[0x70] = KEY_Numpad0;
	ps2_keymap_shift[0x71] = KEY_NumpadDecimal;
	ps2_keymap_shift[0x72] = KEY_Numpad2;
	ps2_keymap_shift[0x73] = KEY_Numpad5;
	ps2_keymap_shift[0x74] = KEY_Numpad6;
	ps2_keymap_shift[0x75] = KEY_Numpad8;
	ps2_keymap_shift[0x76] = KEY_Escape;
	ps2_keymap_shift[0x77] = KEY_NumLock;
	ps2_keymap_shift[0x78] = KEY_F11;
	ps2_keymap_shift[0x79] = KEY_NumpadPlus;
	ps2_keymap_shift[0x7A] = KEY_Numpad3;
	ps2_keymap_shift[0x7B] = KEY_NumpadMinus;
	ps2_keymap_shift[0x7C] = KEY_NumpadMultiply;
	ps2_keymap_shift[0x7D] = KEY_Numpad9;
	ps2_keymap_shift[0x83] = KEY_F7;

	memory_set((u8*)ps2_keymap_extended, 0x00, sizeof(ps2_keymap_extended));
	ps2_keymap_extended[0x11] = KEY_AltGr;
	ps2_keymap_extended[0x14] = KEY_RightCtrl;
	ps2_keymap_extended[0x15] = KEY_MediaPrevious;
	ps2_keymap_extended[0x1F] = KEY_Super;
	ps2_keymap_extended[0x21] = KEY_VolumeUp;
	ps2_keymap_extended[0x23] = KEY_VolumeMute;
	ps2_keymap_extended[0x2B] = KEY_Calculator;
	ps2_keymap_extended[0x32] = KEY_VolumeDown;
	ps2_keymap_extended[0x34] = KEY_MediaPlayPause;
	ps2_keymap_extended[0x3B] = KEY_MediaStop;
	ps2_keymap_extended[0x4A] = KEY_NumpadDivide;
	ps2_keymap_extended[0x4D] = KEY_MediaNext;
	ps2_keymap_extended[0x5A] = KEY_NumpadEnter;
	ps2_keymap_extended[0x69] = KEY_End;
	ps2_keymap_extended[0x6B] = KEY_ArrowLeft;
	ps2_keymap_extended[0x6C] = KEY_Home;
	ps2_keymap_extended[0x70] = KEY_Insert;
	ps2_keymap_extended[0x71] = KEY_Delete;
	ps2_keymap_extended[0x72] = KEY_ArrowDown;
	ps2_keymap_extended[0x74] = KEY_ArrowRight;
	ps2_keymap_extended[0x75] = KEY_ArrowUp;
	ps2_keymap_extended[0x7A] = KEY_PageUp;
	ps2_keymap_extended[0x7D] = KEY_PageDown;
}
