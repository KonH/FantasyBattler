#include <conio.h>
#include "MenuController.h";

namespace ConsoleSupport {
	MenuController::MenuController(MenuModel *model) {
		_model = model;
	}

	bool MenuController::Process() {
		int KB_code = 0;
		if (_kbhit()) {
			KB_code = _getch();
			switch (KB_code) {
			case KB_LEFT:
				_model->SetValue("LEFT");
				break;

			case KB_RIGHT:
				_model->SetValue("RIGHT");
				break;

			case KB_UP:
				_model->SetValue("UP");
				break;

			case KB_DOWN:
				_model->SetValue("DOWN");
				break;

			case KB_ESCAPE:
				return true;
			}
		}
		return false;
	}
}