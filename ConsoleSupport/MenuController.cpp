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
			int curIndex = _model->GetSelectedIndex();
			switch (KB_code) {
				case KB_UP:
					_model->Select(--curIndex);
					break;

				case KB_DOWN:
					_model->Select(++curIndex);
					break;

				case KB_ENTER:
					return true;
			}
		}
		return false;
	}
}