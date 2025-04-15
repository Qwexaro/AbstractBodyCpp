#include "Body.h"

int Body::amount_body = 0;

Body::Body() : id{++amount_body}, massa { rand()%10 + 1}, x{0}, y{0}, z{0} {}

Ball::Ball() : high_of_jump { 0 } {}

Dice::Dice() : num{rand() % 7 - 6} {}

int Body::getId() const
{
	return id;
}

void Ball::info()
{
	std::cout << "\nћ€чик с Id: " <<  getId() << " по координатам X : " << x << ", Y : " << y << ", Z : "
		<< z << ", имеет массу " << massa << std::endl;
}

void Dice::info()
{
	std::cout << "\n убик с Id: " << getId() << " по координатам X : " << x << ", Y : " << y << ", Z : " 
		<< z << ", имеет массу " << massa << std::endl;
}


int Dice::dropIt(int force)
{
	if(force < 0)
	{
		num = rand() % 6 + 1;
		std::cout << "\n убик с Id: "<< getId() << "не ожидал такого поворота событий и решил выдать отрицательное значение : " 
		<< -num << std::endl;


		return num;
	}
	else if(force == 0)
	{
		std::cout << "\n* уб с Id: " << getId() << " смотрит на вас с подозрением* \n";
		return num;
	}
	else
	{
		num = rand() % 6 + 1;
		std::cout << "\n¬ы бросаете кубик с Id: " << getId()
			<< " и он выдает цифру : " << num << std::endl;
		return num;
	}
}


int Ball::dropIt(int force)
{
	if (force < 0 && y != 100)
	{
		std::cout << "\n” м€ча с Id: " << getId() << " отрасли крыль€ и он полетел наверх" << std::endl;
		y = 100;
		return high_of_jump;
	}
	else if (force > 0 && y == 100) {
		std::cout << "\n¬ы не можете дот€нутьс€ до м€ча с Id: " << getId() << ", он слишком высоко летает." << std::endl;
		return high_of_jump;
	}
	else if (force == 0) {
		std::cout << "\nћ€чу с Id: " << getId() << " нравитс€ ничего не делать" << std::endl;
		return high_of_jump;
	}
	else
	{
		high_of_jump = massa * force * 3;
		std::cout << "\n¬ы бьете по м€чу c Id: "<< getId() << " силой: " << force << ", высота на которую подн€лс€ м€ч: " << high_of_jump 
			<< std::endl;
		return high_of_jump;
	}
}