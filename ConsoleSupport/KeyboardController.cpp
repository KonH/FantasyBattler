#include <conio.h>;
#include "KeyboardController.h";

namespace ConsoleSupport {
	int KeyboardController::GetKeyCode() {
		return _kbhit() ? _getch() : 0;
	}
}