﻿#pragma once

#include <Usagi/Module/Common/Math/Matrix.hpp>

namespace usagi
{
class NativeWindow;

class NativeWindowManager
{
public:
    virtual ~NativeWindowManager() = default;

    virtual NativeWindow * create_window(
        std::string_view identifier,
        std::string_view title,
        const Vector2f &position,
        const Vector2f &size
    ) = 0;

    virtual NativeWindow * window(std::string_view identifier) = 0;
    virtual void destroy_unused_windows() = 0;

    // virtual Vector2u32 currentDisplayResolution() = 0;

    /**
     * \brief Read window events from system event queue and dispatch
     * them to corresponding window instances.
     */
    // virtual void process_events() = 0;
};
}
