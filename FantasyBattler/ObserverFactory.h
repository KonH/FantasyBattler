#pragma once
#include "MenuObserver.h";
#include "MenuModel.h";

using namespace GameLogics;

namespace FantasyBattler {
	class ObserverFactory {
	public:
		MenuObserver* CreateMenuObserver(MenuModel* model);
	};
}