#pragma once
#include <iostream>
#include "utils.h"

using namespace std;

class Point {
	char figure;
	int x, y;
public:
	Point(int x1, int y1, char figure1) { x = x1; y = y1; figure = figure1; }
	Point() {};
	void move(Direction dir) {
		erase();
		setDirection(dir);
		draw();
	}
	void setDirection(Direction dir) {
		if (dir == Direction::RIGHT) x++;
		else if (dir == Direction::LEFT) x--;
		else y++;
	}
	void draw() {
		gotoxy(x, y);
		cout << figure;
	}
	void erase() {
		gotoxy(x, y);
		cout << ' ';
	}
};