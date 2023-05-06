#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int windows_mouse_mover()
{
    int x = rand() % 2401;
    int y = rand() % 1001;

    SetCursorPos(x, y);
    return 0;
}