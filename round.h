#pragma once
#include "square.h"
#include "joker.h"
#include "bomb.h"
#include "stick.h"
#include "board.h"
#include <Windows.h>
#include <conio.h>

class Round {
	//	Stick s1;
	//	Bomb b1;
	//	Joker j1;
	//	Square sq1;
public:
	void run();
	void createShape(int shape);
	void moveShape(int shape, Direction dir = Direction::DOWN);
};