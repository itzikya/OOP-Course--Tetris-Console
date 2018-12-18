#pragma once
#include "gameObject.h"
#include <Windows.h>
#include <conio.h>

class tetrisGame {

public:
	void run()
	{
		for (int i = 0; i < 80 ; i++)
		{
			Sleep(600);
			gameObject().run();
		}

	}
};