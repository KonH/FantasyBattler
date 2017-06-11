#pragma once
#include "KeyboardController.h";
#include "StartModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
	class StartController :public KeyboardController {
		StartModel *_model;
	public:
		StartController(StartModel *model);
		void Process();
	};
}