#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <fstream>
#include <string>

template<class T>
void showMessage(T value)
{
    showMessage(std::to_string(value));
}

void showMessage(const std::string &text)
{
    MessageBox(nullptr, text.c_str(), nullptr, 0);
}


LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
TCHAR WinName[] = "MainFrame";

int APIENTRY _tWinMain(HINSTANCE instance,
                       HINSTANCE prev_instance,
                       LPTSTR cmd_line,
                       int window_mode)
{
    std::ofstream file("logs.txt");

    MSG message{};
    int result = 0;
    while ((result = GetMessage(&message, NULL, 0, 0)) != 0)
    {
        if (result == -1)
            return 3;

        showMessage(result);

        TranslateMessage(&message);
        DispatchMessage(&message);
    }


    return 0;
}
