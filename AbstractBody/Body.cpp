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
	std::cout << "\n����� � Id: " <<  getId() << " �� ����������� X : " << x << ", Y : " << y << ", Z : "
		<< z << ", ����� ����� " << massa << std::endl;
}

void Dice::info()
{
	std::cout << "\n����� � Id: " << getId() << " �� ����������� X : " << x << ", Y : " << y << ", Z : " 
		<< z << ", ����� ����� " << massa << std::endl;
}


int Dice::dropIt(int force)
{
	if(force < 0)
	{
		num = rand() % 6 + 1;
		std::cout << "\n����� � Id: "<< getId() << "�� ������ ������ �������� ������� � ����� ������ ������������� �������� : " 
		<< -num << std::endl;


		return num;
	}
	else if(force == 0)
	{
		std::cout << "\n*��� � Id: " << getId() << " ������� �� ��� � �����������* \n";
		return num;
	}
	else
	{
		num = rand() % 6 + 1;
		std::cout << "\n�� �������� ����� � Id: " << getId()
			<< " � �� ������ ����� : " << num << std::endl;
		return num;
	}
}


int Ball::dropIt(int force)
{
	if (force < 0 && y != 100)
	{
		std::cout << "\n� ���� � Id: " << getId() << " ������� ������ � �� ������� ������" << std::endl;
		y = 100;
		return high_of_jump;
	}
	else if (force > 0 && y == 100) {
		std::cout << "\n�� �� ������ ���������� �� ���� � Id: " << getId() << ", �� ������� ������ ������." << std::endl;
		return high_of_jump;
	}
	else if (force == 0) {
		std::cout << "\n���� � Id: " << getId() << " �������� ������ �� ������" << std::endl;
		return high_of_jump;
	}
	else
	{
		high_of_jump = massa * force * 3;
		std::cout << "\n�� ����� �� ���� c Id: "<< getId() << " �����: " << force << ", ������ �� ������� �������� ���: " << high_of_jump 
			<< std::endl;
		return high_of_jump;
	}
}