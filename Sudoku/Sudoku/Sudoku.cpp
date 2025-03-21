#include "Sudoku.h"
#include "Tools.h"

#include "Player.h"

#include <iostream>
#include <string>

Sudoku::Sudoku()
{
	myBoard = {};
	myPlayer = nullptr;
}

Sudoku::~Sudoku()
{
}

void Sudoku::Init(Player* aPlayer)
{
	myPlayer = aPlayer;

	for (size_t row = 0; row < myBoard.size(); row++)
	{
		for (size_t col = 0; col < myBoard[row].size(); col++)
		{
			myBoard[row][col] = 0;
		}
	}
}

int Sudoku::Update()
{
	myPlayer->Move(myBoard);

	myPlayer->Place();

	return 1;
}

void Sudoku::Draw() const
{
	DrawBoard(10, 10);
}

void Sudoku::DrawBoard(int x, int y) const
{
	DrawBorder(x, y);

	int size = static_cast<int>(myBoard.size()) / 3;
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			DrawBox(x + col * 8, y + 1 + row * 4, myBoard[col + row * size]);
		}

		DrawBorder(x, y + (row + 1) * 4);
	}
}

void Sudoku::DrawBorder(int x, int y) const
{
	Cursor::SetCursorPos(x, y);

	for (size_t i = 0; i < myBoard.size() - 1; i++)
	{
		std::cout << "===";
	}
	std::cout << "=" << std::endl;
}

void Sudoku::DrawBox(int x, int y, const std::array<int, 9>& aBox) const
{
	int size = static_cast<int>(myBoard.size()) / 3;
	for (int row = 0; row < size; row++)
	{
		Cursor::SetCursorPos(x, y + row);
		std::cout << "#";
		for (int col = 0; col < size; col++)
		{
			std::cout << "|" << std::to_string(aBox[col + row * size]);
		}
		std::cout << "|#" << std::endl;
	} 
}


