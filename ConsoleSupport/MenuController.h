#pragma once
#include "KeyboardController.h";
#include "MenuModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
	class MenuController:public KeyboardController {
		MenuModel &_model;
	public:
		MenuController(MenuModel &model);
		void Process();
	};
}