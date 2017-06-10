#pragma once
#include "MenuModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
#define KB_UP 72
#define KB_DOWN 80
#define KB_ENTER 13

	class MenuController {
		MenuModel *_model;
	public:
		MenuController(MenuModel *model);
		bool Process();
	};
}