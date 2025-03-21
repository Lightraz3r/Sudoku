#ifndef PLAYER_H_
#define PLAYER_H_

#include <array>

enum class eDirection
{
	Left,
	Right,
	Up,
	Down,
};

class Player
{
	public:
		Player() = default;
		virtual ~Player() = default;

		virtual eDirection Move(const std::array < std::array<int, 9>, 9>& aBoard) = 0;
		virtual int Place() = 0;
	private:
};

#endif // !PLAYER_H_

