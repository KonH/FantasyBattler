#ifdef CONSOLE
#include "ControllerFactory.h";
#include "MenuController.h";
#include "StartController.h";

using namespace ConsoleSupport;

namespace FantasyBattler {
	BaseController* ControllerFactory::CreateMenuController(MenuModel* model) {
		return new MenuController(model);
	}

	BaseController* ControllerFactory::CreateStartController(StartModel* model) {
		return new StartController(model);
	}
}
#endif