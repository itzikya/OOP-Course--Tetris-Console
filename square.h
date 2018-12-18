#pragma once
#include "point.h"

class Square
{
	char figure = '*';
	Point body[4]{ 
		{ (int)Range::MID_X -1, (int)Range::MIN_Y, figure },
		{ (int)Range::MID_X , (int)Range::MIN_Y, figure },
		{ (int)Range::MID_X-1,  (int)Range::MIN_Y+1, figure },
		{ (int)Range::MID_X, (int)Range::MIN_Y+1, figure } 
	};

public:
	void move(Direction dir) {
		erase();
		setDirection(dir);
		draw();
	}
	void erase() {
		for (int i = 0; i < 4; i++)
			body[i].erase();
	}
	void setDirection(Direction dir) {
		for (int i = 0; i < 4; i++)
			body[i].setDirection(dir);
	}
	void draw() {
		for (int i = 0; i < 4; i++)
			body[i].draw();
	}
};