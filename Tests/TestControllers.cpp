#include "TestControllers.h";

namespace Tests {

	MenuController::MenuController(MenuModel *model) {
		_model = model;
	}
	void MenuController::Process() {
		_model->Apply();
	}

	StartController::StartController(StartModel *model) {
		_model = model;
	}
	void StartController::Process() {
		_model->Back();
	}
}