#pragma once
#include "MenuModel.h";
#include "BaseController.h";

using namespace GameLogics;

namespace FantasyBattler {
	class ControllerFactory {
	public:
		BaseController* CreateMenuController(MenuModel* model);
	};
}
