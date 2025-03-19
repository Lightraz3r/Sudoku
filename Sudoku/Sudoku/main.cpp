// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sudoku.h"

#include <cstdlib>
#include <crtdbg.h>

int main()
{
    {
        Game game;

        game.Init();

        int code = 1;
        while (code != 0)
        {
            code = game.Update();
            game.Draw();
        }
    }

    std::system("PAUSE");

    _CrtDumpMemoryLeaks();
}