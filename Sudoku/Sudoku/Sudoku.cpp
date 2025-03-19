#include "Sudoku.h"
#include "Tools.h"

#include <iostream>

Game::Game()
{
	
}

Game::~Game()
{
}

void Game::Init()
{
	for (size_t row = 0; row < myBoard.size(); row++)
	{
		for (size_t col = 0; col < myBoard[row].size(); col++)
		{
			myBoard[row][col] = 0;
		}
	}
}

int Game::Update()
{
	std::system("PAUSE");
	return 1;
}

void Game::Draw() const
{
	DrawBoard(10, 10);
}

void Game::DrawBoard(int x, int y) const
{
	DrawBorder(x, y);

	for (size_t row = 0; row < myBoard.size() / 3; row++)
	{
		for (size_t col = 0; col < myBoard[row].size() / 3; col++)
		{
			DrawBox(x + col * 8, y + 1 + row * 4);
		}

		DrawBorder(x, y + (row + 1) * 4);
	}
}

void Game::DrawBorder(int x, int y) const
{
	Cursor::SetCursorPos(x, y);

	for (size_t i = 0; i < myBoard.size() - 1; i++)
	{
		std::cout << "===";
	}
	std::cout << "=" << std::endl;
}

void Game::DrawBox(int x, int y) const
{
	size_t size = myBoard.size() / 3;
	for (size_t row = 0; row < size; row++)
	{
		Cursor::SetCursorPos(x, y + row);
		std::cout << "#";
		for (size_t col = 0; col < size; col++)
		{
			std::cout << "| ";
		}
		std::cout << "|#" << std::endl;
	} 
}


