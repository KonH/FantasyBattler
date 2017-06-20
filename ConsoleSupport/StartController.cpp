#include "StartController.h";

namespace ConsoleSupport {
	StartController::StartController(StartModel &model) : _model(model) {}

	void StartController::Process() {
		switch (GetKeyCode()) {
		case KB_ENTER:
			_model.Apply();
			break;

		case KB_ESC:
			_model.Back();
			break;
		}
	}
}