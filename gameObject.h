#pragma once
#include "point.h"
#include <ctime>

class gameObject
{
	enum class Shape { BOMB, JOKER, STICK, SQUARE };
	int size;
	Point body[4];

public:
	gameObject()
	{
		srand(time(0));  // needs ctime header.
		Shape s = (Shape)(rand() % 4);
		switch (s) {
		case (Shape::BOMB):
			size = 1;
			body[0] = { (int)Range::MID_X, (int)Range::MIN_Y, '@' };
			break;

		case (Shape::JOKER):
			size = 1;
			body[0] = { (int)Range::MID_X, (int)Range::MIN_Y, '$' };
			break;

		case (Shape::STICK):
			size = 4;
			body[0] = { (int)Range::MID_X - 2, (int)Range::MIN_Y, '#' };
			body[1] = { (int)Range::MID_X - 1, (int)Range::MIN_Y, '#' };
			body[2] = { (int)Range::MID_X, (int)Range::MIN_Y, '#' };
			body[3] = { (int)Range::MID_X + 1, (int)Range::MIN_Y, '#' };

			break;

		case (Shape::SQUARE):
			size = 4;
			body[0] = { (int)Range::MID_X - 1, (int)Range::MIN_Y, '=' };
			body[1] = { (int)Range::MID_X, (int)Range::MIN_Y, '=' };
			body[2] = { (int)Range::MID_X - 1, (int)Range::MIN_Y + 1, '=' };
			body[3] = { (int)Range::MID_X, (int)Range::MIN_Y + 1, '=' };
			break;
		}
	}

	void run() {
		drawBoard();
		draw();
		Sleep(600);
		char keyPressed = 0;
		while (true)
		{
			while (!_kbhit()) {
				move(Direction::DOWN);
				Sleep(1000);

			}

			if (_kbhit()) {
				keyPressed = _getch();
				switch (keyPressed)
				{
				case 'd':
					move(Direction::RIGHT);
					Sleep(60);
					break;
				case 'a':
					move(Direction::LEFT);
					Sleep(60);

				case 's':
					move(Direction::DOWN);
					Sleep(60);
				}
			}
		}
	}

	void drawBoard()
	{
		cout << "Your restult is: " << " 0 ya loser" << endl;
		cout << "NUM OF BRICKS: " << " 0 " << endl;
		cout << endl;
		for (int i = (int)Range::MIN_Y-1; i <= (int)Range::MAX_Y+1; i++)
		{
				if (i == (int)Range::MIN_Y-1 || i == (int)Range::MAX_Y+1)
				{
					for (int j = (int)Range::MIN_X-1; j <= (int)Range::MAX_X; j++)
					{
						gotoxy(j, i);
						cout << '*';
					}
				}

				else
				{
					for (int j = (int)Range::MIN_X-1; j <= (int)Range::MAX_X; j++)
					{
						if (j == (int)Range::MIN_X - 1 || j == (int)Range::MAX_X)
						{
							gotoxy(j, i);
							cout << '*';
						}
						else
						{
							gotoxy(j, i);
							cout << ' ';

						}
					}
				}
				cout << endl;
		}
	}
	void move(Direction dir) {
		erase();
		setDirection(dir);
		draw();
	}
	void erase() {
		for (int i = 0; i < size; i++)
			body[i].erase();
	}
	void setDirection(Direction dir) {
		for (int i = 0; i < size; i++)
			body[i].setDirection(dir);
	}
	void draw() {
		for (int i = 0; i < size; i++)
			body[i].draw();
	}
};
