#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <array>

class Player;

class Sudoku
{
	public:
		Sudoku();
		~Sudoku();

		void Init(Player* aPlayer);
		int Update();
		void Draw() const;
	private:
		void DrawBoard(int x, int y) const;
		void DrawBorder(int x, int y) const;
		void DrawBox(int x, int y, const std::array<int, 9>& aBox) const;

	private:
		std::array<std::array<int, 9>, 9> myBoard; // 9 integer in one box; 9 boxes in one board;
		
		Player* myPlayer;
};

#endif // !SUDOKU_H_

