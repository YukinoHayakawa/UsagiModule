﻿#pragma once

#include <Usagi/Module/Common/Math/Matrix.hpp>

namespace usagi
{
/**
* \brief NativeWindow provides a platform-dependent surface for graphics output.
* The surface may be drawn using native APIs or accelerated graphics APIs.
*
* User input principally does not require a window. However, to implement
* proper program functionalities, it is usually preferable to know input events
* specific to some window. Depending on the type of input device, different
* policies might be used to determine the dispatching of input events to
* windows. For example, keyboard events depend on the current capture status
* of the mouse. While gamepad events might be routed to the main game window
* despite whatever the mouse state is.
*
* The user input is received in Service/Input rather than here. Endpoint
* systems should receive input events from the input service and use the filters
* that transform and filter window-related events to read input events specific
* to a window. On the other hand, there are window-related events, too, such as
* resizing, repositioning, drag'n'drop, etc.
*/
class NativeWindow
{
protected:
    Vector2f mPosition { 0, 0 };
    Vector2f mSize { 0, 0 };
    Vector2f mDpiScaling { 1, 1 };
    bool mShouldClose = false;

public:
    virtual ~NativeWindow() = default;

    Vector2f position() const { return mPosition; }
    Vector2f size() const { return mSize; }
    Vector2f dpi_scaling() const { return mDpiScaling; }

    bool should_close() const { return mShouldClose; }
    virtual void destroy() = 0;

    // virtual void setPosition(const Vector2i &position) = 0;
    // virtual void centerWindow() = 0;


    /**
     * \brief Set client area size (excluding title bar, border, etc.)
     * \param size
     */
    // virtual void setSize(const Vector2u32 &size) = 0;

    // virtual void setBorderlessFullscreen() = 0;

    /**
     * \brief Get window title encoded using UTF-8.
     * \return
     */
    // virtual std::string title() const = 0;



    /**
     * \brief
     * \param title New window title encoded using UTF-8.
     */
    // virtual void setTitle(std::string title) = 0;
    //
    // virtual void show(bool show) = 0;
    // virtual bool focused() const = 0;
    // virtual bool isOpen() const = 0;
    // virtual void setResizingEnabled(bool enabled = true) = 0;
    //
    // virtual std::string getClipboardText() = 0;
    // virtual void setClipboardText(const std::string &text) = 0;


};
}
