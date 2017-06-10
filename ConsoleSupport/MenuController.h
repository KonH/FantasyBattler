#pragma once
#include "MenuModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
#define KB_UP 72
#define KB_DOWN 80
#define KB_LEFT 75
#define KB_RIGHT 77
#define KB_ESCAPE 27

	class MenuController {
		MenuModel *_model;
	public:
		MenuController(MenuModel *model);
		bool Process();
	};
}