#pragma once
#include "point.h"
class Joker
{
	char figure = '$';
	Point body{ (int)Range::MID_X, (int)Range::MIN_Y, figure };

public:
	void move(Direction dir) { body.move(dir); }
	void draw() { body.draw(); }
};