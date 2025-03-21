#ifndef HUMAN_H_
#define HUMAN_H_

#include "Player.h"

class Human : public Player
{
	public:
		Human();
		~Human() override;

		eDirection Move(const std::array<std::array<int, 9>, 9>& aBoard) override;
		int Place() override;

	private:
};

#endif // !HUMAN_H_

