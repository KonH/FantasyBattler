#include <conio.h>;
#include <string>;
#include "KeyboardController.h";
#include "Debug.h";

using namespace GameLogics;

namespace ConsoleSupport {
	int KeyboardController::GetKeyCode() {
		if (_kbhit()) {
			int ch = _getch();
			Debug("KeyboardController::GetKeyCode(): " + std::to_string(ch));
			return ch;
		}
		return 0;
	}
}