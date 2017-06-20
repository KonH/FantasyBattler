#pragma once
#include "MenuModel.h";
#include "StartModel.h";

using namespace GameLogics;

namespace FantasyBattler {
	class ObserverFactory {
	public:
		BaseObserver* CreateMenuObserver(MenuModel &model);
		BaseObserver* CreateStartObserver(StartModel &model);
	};
}