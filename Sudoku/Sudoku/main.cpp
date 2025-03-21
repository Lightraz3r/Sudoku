// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sudoku.h"
#include "Human.h"

#include <cstdlib>
#include <crtdbg.h>

int main()
{
    {
        Sudoku game;
        Human human;

        game.Init(&human);

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