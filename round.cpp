#pragma once
#include "round.h"

void Round::run()
{
	char keyPressed;
	int currShape = rand() % 4;
	createShape(currShape);
	while (true)
	{
		keyPressed = 0;
		while (!_kbhit)
		{
			moveShape(currShape);
		}
		keyPressed = _getch();
	}
	switch (keyPressed)

		break;
}
void Round::createShape(int shape)
{
	switch (shape) {
	case (int)Shape::BOMB:
		Bomb().draw();
		break;

	case (int)Shape::JOKER:
		Joker().draw();
		break;

	case (int)Shape::SQUARE:
		Square().draw();
		break;

	case (int)Shape::STICK:
		Stick().draw();
		break;
	}
}
void Round::moveShape(int shape, Direction dir)
{
	switch (shape) {
	case (int)Shape::BOMB:
		Bomb().move(dir);
		break;

	case (int)Shape::JOKER:
		Joker().move(dir);
		break;

	case (int)Shape::SQUARE:
		Square().move(dir);
		break;

	case (int)Shape::STICK:
		Stick().move(dir);
		break;
	}
}
