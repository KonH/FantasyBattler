#ifdef CONSOLE
#include "ControllerFactory.h";
#include "MenuController.h";

using namespace ConsoleSupport;

namespace FantasyBattler {
	BaseController* ControllerFactory::CreateMenuController(MenuModel* model) {
		return new MenuController(model);
	}
}
#endif