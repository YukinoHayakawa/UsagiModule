﻿#include "InputAxis.hpp"

const char * usagi::to_string(InputAxis key)
{
    switch(key)
    {
        // Keyboard
        case InputAxis::ESCAPE: return "Escape";
        case InputAxis::F1: return "F1";
        case InputAxis::F2: return "F2";
        case InputAxis::F3: return "F3";
        case InputAxis::F4: return "F4";
        case InputAxis::F5: return "F5";
        case InputAxis::F6: return "F6";
        case InputAxis::F7: return "F7";
        case InputAxis::F8: return "F8";
        case InputAxis::F9: return "F9";
        case InputAxis::F10: return "F10";
        case InputAxis::F11: return "F11";
        case InputAxis::F12: return "F12";
        case InputAxis::PRINT_SCREEN: return "PrintScreen";
        case InputAxis::SCROLL_LOCK: return "ScrollLock";
        case InputAxis::PAUSE: return "Pause";
        case InputAxis::GRAVE_ACCENT: return "`";
        case InputAxis::DIGIT_0: return "0";
        case InputAxis::DIGIT_1: return "1";
        case InputAxis::DIGIT_2: return "2";
        case InputAxis::DIGIT_3: return "3";
        case InputAxis::DIGIT_4: return "4";
        case InputAxis::DIGIT_5: return "5";
        case InputAxis::DIGIT_6: return "6";
        case InputAxis::DIGIT_7: return "7";
        case InputAxis::DIGIT_8: return "8";
        case InputAxis::DIGIT_9: return "9";
        case InputAxis::A: return "A";
        case InputAxis::B: return "B";
        case InputAxis::C: return "C";
        case InputAxis::D: return "D";
        case InputAxis::E: return "E";
        case InputAxis::F: return "F";
        case InputAxis::G: return "G";
        case InputAxis::H: return "H";
        case InputAxis::I: return "I";
        case InputAxis::J: return "J";
        case InputAxis::K: return "K";
        case InputAxis::L: return "L";
        case InputAxis::M: return "M";
        case InputAxis::N: return "N";
        case InputAxis::O: return "O";
        case InputAxis::P: return "P";
        case InputAxis::Q: return "Q";
        case InputAxis::R: return "R";
        case InputAxis::S: return "S";
        case InputAxis::T: return "T";
        case InputAxis::U: return "U";
        case InputAxis::V: return "V";
        case InputAxis::W: return "W";
        case InputAxis::X: return "X";
        case InputAxis::Y: return "Y";
        case InputAxis::Z: return "Z";
        case InputAxis::MINUS: return "-";
        case InputAxis::EQUAL: return "=";
        case InputAxis::LEFT_BRACKET: return "[";
        case InputAxis::RIGHT_BRACKET: return "]";
        case InputAxis::BACKSLASH: return "/";
        case InputAxis::SEMICOLON: return ";";
        case InputAxis::QUOTE: return "'";
        case InputAxis::COMMA: return ",";
        case InputAxis::PERIOD: return ".";
        case InputAxis::SLASH: return "\\";
        case InputAxis::SPACE: return "Space";
        case InputAxis::BACKSPACE: return "Backspace";
        case InputAxis::TAB: return "Tab";
        case InputAxis::CAPS_LOCK: return "CapsLock";
        case InputAxis::ENTER: return "Enter";
        case InputAxis::LEFT_SHIFT: return "LeftShift";
        case InputAxis::RIGHT_SHIFT: return "RightShift";
        case InputAxis::LEFT_CONTROL: return "LeftControl";
        case InputAxis::RIGHT_CONTROL: return "RightControl";
        case InputAxis::LEFT_ALT: return "LeftAlt";
        case InputAxis::RIGHT_ALT: return "RightAlt";
        case InputAxis::LEFT_OS: return "LeftOS";
        case InputAxis::RIGHT_OS: return "RightOS";
        case InputAxis::CONTEXT_MENU: return "ContextMenu";
        case InputAxis::INSERT: return "Insert";
        case InputAxis::DELETE: return "Delete";
        case InputAxis::HOME: return "Home";
        case InputAxis::END: return "End";
        case InputAxis::PAGE_UP: return "PageUp";
        case InputAxis::PAGE_DOWN: return "PageDown";
        case InputAxis::UP: return "Up";
        case InputAxis::DOWN: return "Down";
        case InputAxis::LEFT: return "Left";
        case InputAxis::RIGHT: return "Right";
        case InputAxis::NUM_LOCK: return "NumLock";
        case InputAxis::NUM_DIVIDE: return "Num/";
        case InputAxis::NUM_MULTIPLY: return "Num*";
        case InputAxis::NUM_SUBTRACT: return "Num-";
        case InputAxis::NUM_ADD: return "Num+";
        case InputAxis::NUM_0: return "Num0";
        case InputAxis::NUM_1: return "Num1";
        case InputAxis::NUM_2: return "Num2";
        case InputAxis::NUM_3: return "Num3";
        case InputAxis::NUM_4: return "Num4";
        case InputAxis::NUM_5: return "Num5";
        case InputAxis::NUM_6: return "Num6";
        case InputAxis::NUM_7: return "Num7";
        case InputAxis::NUM_8: return "Num8";
        case InputAxis::NUM_9: return "Num9";
        case InputAxis::NUM_DECIMAL: return "Num.";
        case InputAxis::NUM_ENTER: return "NumEnter";
        // Mouse
        case InputAxis::MOUSE_CURSOR: return "MouseCursor";
        case InputAxis::MOUSE_LEFT: return "MouseLeft";
        case InputAxis::MOUSE_RIGHT: return "MouseRight";
        case InputAxis::MOUSE_MIDDLE: return "MouseMiddle";
        case InputAxis::MOUSE_BUTTON_4: return "Mouse4";
        case InputAxis::MOUSE_BUTTON_5: return "Mouse5";
        case InputAxis::MOUSE_WHEEL_X: return "MouseWheelX";
        case InputAxis::MOUSE_WHEEL_Y: return "MouseWheelY";
        // Gamepad
        case InputAxis::PAD_LEFT_UP: return "PadLeftUp";
        case InputAxis::PAD_LEFT_DOWN: return "PadLeftDown";
        case InputAxis::PAD_LEFT_LEFT: return "PadLeftLeft";
        case InputAxis::PAD_LEFT_RIGHT: return "PadLeftRight";
        case InputAxis::PAD_RIGHT_UP: return "PadRightUp";
        case InputAxis::PAD_RIGHT_DOWN: return "PadRightDown";
        case InputAxis::PAD_RIGHT_LEFT: return "PadRightLeft";
        case InputAxis::PAD_RIGHT_RIGHT: return "PadRightRight";
        case InputAxis::PAD_LEFT_SHOULDER: return "PadLeftShoulder";
        case InputAxis::PAD_RIGHT_SHOULDER: return "PadRightShoulder";
        case InputAxis::PAD_LEFT_STICK: return "PadLeftStick";
        case InputAxis::PAD_RIGHT_STICK: return "PadRightStick";
        case InputAxis::PAD_SETTING_LEFT: return "PadSettingLeft";
        case InputAxis::PAD_SETTING_RIGHT: return "PadSettingRight";

        default: return "Unknown";
    }
}
