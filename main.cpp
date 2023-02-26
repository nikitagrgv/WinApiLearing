#include <iostream>
#include <windows.h>
#include <tchar.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
TCHAR WinName[] = "MainFrame";

int APIENTRY _tWinMain(HINSTANCE instance,
                       HINSTANCE prev_instance,
                       LPTSTR cmd_line,
                       int window_mode)
{
    MessageBox(NULL, "Hello chel!", "Hello", 1);
    return 0;
}
