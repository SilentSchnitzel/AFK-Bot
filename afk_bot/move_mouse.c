#include <stdio.h>
#include <X11/Xlib.h>
#include <stdlib.h>

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
