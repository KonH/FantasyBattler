#include "MenuController.h";

namespace ConsoleSupport {
	MenuController::MenuController(MenuModel &model) : _model(model) {}

	void MenuController::Process() {
		int curIndex = _model.GetSelectedIndex();
		switch (GetKeyCode()) {
			case KB_UP:
				_model.Select(--curIndex);
				break;

			case KB_DOWN:
				_model.Select(++curIndex);
				break;

			case KB_ENTER:
				_model.Apply();
				break;

			case KB_ESC:
				_model.Exit();
				break;
		}
	}
}