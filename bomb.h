#pragma once
#include "point.h"
#include <Windows.h>
class Bomb
{
	char figure = '@';
	Point body((int)Range::MID_X, (int)Range::MIN_Y, figure);
	Point body;
public:
	Bomb()
	{
		body
	}
	void move(Direction dir) { body.move(dir); }
	void draw()	{ body.draw(); }
};