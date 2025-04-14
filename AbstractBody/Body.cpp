#include "Body.h"

int Body::amount_body = 0;

Body::Body() : id{++amount_body}, massa { 0 }, x{ 0 }, y{ 0 }, z{ 0 } {}

Ball::Ball() : high_of_jump { 0 } {}

Dice::Dice() : num{rand() % 7 - 6} {}

int Ball::dropIt(int force)
{
	if (force < 0)
	{
		int rebound = force * massa / 2;
		return rebound;
	}
	else
	{
		return;
	}
}

void Ball::info()
{
	std::cout << "";
}



int Dice::dropIt(int force)
{
	if(force < 0)
	{
		std::cout << "¬ы бросаете кубик с отрицательной силой..." 
			<< std::endl 
			<< " убик не ожидал такого поворота событий и решил выдать отрицательное значение" 
			<< std::endl;
		num = rand() % -19;
		return num;
	}
	else
	{
		return num;
	}
}