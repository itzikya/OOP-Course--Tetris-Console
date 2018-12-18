#pragma once
#include <Windows.h>
#include <conio.h>
void gotoxy(int, int);
void clrscr();

enum class Direction { LEFT, RIGHT, DOWN };
enum class Range { MIN_X = 11, MAX_X = 21, MID_X = 16, MIN_Y = 4, MAX_Y = 18 };
enum class KEYS { ROTATE = (int)'i', DOWN = (int)'k', LEFT = (int)'l', RIGHT = (int)'j', JOKER_STOP = (int)'s', HARD_DOWN = (int) ' ', ESC = 27, START = (int)'1', STOP = (int)'2', ACCELERATE = (int)'3', DECELERATE = (int)'4' };
