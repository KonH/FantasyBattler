#pragma once
#include "BaseController.h";
#include "MenuModel.h";
#include "StartModel.h";

using namespace GameLogics;

namespace FantasyBattler {
	class ControllerFactory {
	public:
		BaseController* CreateMenuController(MenuModel &model);
		BaseController* CreateStartController(StartModel &model);
	};
}
