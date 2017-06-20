#ifdef TEST
#include "ControllerFactory.h";
#include "TestControllers.h";

using namespace Tests;

namespace FantasyBattler {
	BaseController* ControllerFactory::CreateMenuController(MenuModel &model) {
		return new MenuController(model);
	}

	BaseController* ControllerFactory::CreateStartController(StartModel &model) {
		return new StartController(model);
	}
}
#endif