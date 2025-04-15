#include "Body.h"

int main()
{
	srand(time((0)));

	system("chcp 1251");

	Dice dice1, dice2;	Ball ball1, ball2;


	ball1.info(); dice1.info();

	dice1.dropIt(0);

	ball1.dropIt(-12);

	ball1.info();
	dice1.info();

	ball1.dropIt(134);
	ball2.dropIt(134);

	ball2.info();
	return 0;
}