#pragma once
#include "BaseController.h";

namespace ConsoleSupport {
#define KB_UP 72
#define KB_DOWN 80
#define KB_ENTER 13
#define KB_ESC 27

	class KeyboardController : public GameLogics::BaseController {
	protected:
		int GetKeyCode();
	};
}