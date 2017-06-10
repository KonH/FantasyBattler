#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include "MenuModel.h";
#include "MenuView.h";
#include "MenuController.h";

using namespace GameLogics;
using namespace ConsoleSupport;

int main() {
	MenuModel model;
	MenuController controller(&model);
	MenuView view(&model);
	bool processDone = false;
	while (!processDone) {
		processDone = controller.Process();
	}
	return 0;
}
