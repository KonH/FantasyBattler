#ifdef CONSOLE
#include "ObserverFactory.h";
#include "MenuView.h";
#include "StartView.h";

using namespace ConsoleSupport;

namespace FantasyBattler {
	BaseObserver* ObserverFactory::CreateMenuObserver(MenuModel &model) {
		return new MenuView(model);
	}

	BaseObserver* ObserverFactory::CreateStartObserver(StartModel &model) {
		return new StartView(model);
	}
}
#endif