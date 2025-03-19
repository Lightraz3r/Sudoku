#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <array>

class Game
{
	public:
		Game();
		~Game();

		void Init();
		int Update();
		void Draw() const;
	private:
		std::array<std::array<int, 9>, 9> myBoard;

		void DrawBoard(int x, int y) const;
		void DrawBorder(int x, int y) const;
		void DrawBox(int x, int y) const;
};

#endif // !SUDOKU_H_

