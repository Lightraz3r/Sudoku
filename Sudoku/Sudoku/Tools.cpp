#include "Tools.h"

#include <Windows.h>

void Cursor::SetCursorPos(int x, int y)
{
	HANDLE hStd;
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStd, &csbInfo);
	csbInfo.dwCursorPosition.X = x;
	csbInfo.dwCursorPosition.Y = y;
	SetConsoleCursorPosition(hStd, csbInfo.dwCursorPosition);
}
