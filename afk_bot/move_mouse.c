#include <stdio.h>
//#include <X11/Xlib.h>
#include <stdlib.h>
#ifdef __has_include
#if __has_include(<X11/Xlib.h>)
#include <X11/Xlib.h>
#else
#define INCLUDE_INVALID
#endif
#ifdef INCLUDE_INVALID
#error "X11 library not found"
#endif
#endif

int linux_mouse_mover()
{
    

    int x = rand() % 2401;
    int y = rand() % 1001;

    Display *dpy;
    Window root_window;

    dpy = XOpenDisplay(0);
    root_window = XRootWindow(dpy, 0);
    XSelectInput(dpy, root_window, KeyReleaseMask);
    XWarpPointer(dpy, None, root_window, 0, 0, 0, 0, x, y);
    XFlush(dpy);
    return 0;
}
