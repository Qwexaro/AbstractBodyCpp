#pragma once
#include <iostream>

class Body
{
	int id;
	static int amount_body;
protected:
	int massa, x, y, z;

public:
	Body();
	virtual int dropIt(int force) = 0;
	virtual void info() = 0;
};

class Ball : public Body
{
	double high_of_jump;
public:
	Ball();
	int dropIt(int force);
	void info();
};

class Dice : public Body
{
	int num;
public:
	Dice();
	int dropIt(int force);
	void info();
};