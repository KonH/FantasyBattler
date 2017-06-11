#pragma once
#include "BaseController.h";
#include "MenuModel.h";
#include "StartModel.h";

using namespace GameLogics;

namespace Tests {
	class MenuController :public BaseController {
		MenuModel *_model;
	public:
		MenuController(MenuModel *model);
		void Process();
	};

	class StartController :public BaseController {
		StartModel *_model;
	public:
		StartController(StartModel *model);
		void Process();
	};
}