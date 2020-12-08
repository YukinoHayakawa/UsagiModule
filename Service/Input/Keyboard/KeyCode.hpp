﻿#pragma once

#include <cstdint>

namespace usagi
{
/**
 * \brief Names of keys on standard 101 keyboard.
 */
enum class KeyCode : std::uint16_t
{
    UNKNOWN = 0,

    // FUNCTION KEYS

    ESCAPE,
    F1,
    F2,
    F3,
    F4,
    F5,
    F6,
    F7,
    F8,
    F9,
    F10,
    F11,
    F12,
    PRINT_SCREEN,
    SCROLL_LOCK,
    PAUSE,

    // ALPHANUMERIC KEYS

    GRAVE_ACCENT,
    DIGIT_0,
    DIGIT_1,
    DIGIT_2,
    DIGIT_3,
    DIGIT_4,
    DIGIT_5,
    DIGIT_6,
    DIGIT_7,
    DIGIT_8,
    DIGIT_9,
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    MINUS,
    EQUAL,
    LEFT_BRACKET,
    RIGHT_BRACKET,
    BACKSLASH,
    SEMICOLON,
    QUOTE,
    COMMA,
    PERIOD,
    SLASH,

    // FUNCTIONAL KEYS

    SPACE,
    BACKSPACE,
    TAB,
    CAPS_LOCK,
    ENTER,
    LEFT_SHIFT,
    RIGHT_SHIFT,
    LEFT_CONTROL,
    RIGHT_CONTROL,
    LEFT_ALT,
    RIGHT_ALT,
    LEFT_OS,
    RIGHT_OS,
    CONTEXT_MENU,

    // CONTROL PAD KEYS

    INSERT,
    DELETE,
    HOME,
    END,
    PAGE_UP,
    PAGE_DOWN,

    // ARROW PAD KEYS

    UP,
    DOWN,
    LEFT,
    RIGHT,

    // NUMPAD KEYS

    NUM_LOCK,
    NUM_DIVIDE,
    NUM_MULTIPLY,
    NUM_SUBTRACT,
    NUM_ADD,
    NUM_0,
    NUM_1,
    NUM_2,
    NUM_3,
    NUM_4,
    NUM_5,
    NUM_6,
    NUM_7,
    NUM_8,
    NUM_9,
    NUM_DECIMAL,
    NUM_ENTER,

    ENUM_END,
};

const char * to_string(KeyCode key);
}
