#ifdef CONSOLE
#include "ObserverFactory.h";
#include "MenuView.h";

using namespace ConsoleSupport;

namespace FantasyBattler {
	MenuObserver* ObserverFactory::CreateMenuObserver(MenuModel* model) {
		return new MenuView(model);
	}
}
#endif