#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include "Game.h";
#include "ObserverFactory.h";
#include "ControllerFactory.h";
#include "MenuModel.h";

using namespace GameLogics;

namespace FantasyBattler {
	int Game::Loop() {
		ObserverFactory observerFactory;
		ControllerFactory controllerFactory;
		MenuModel model;
		auto menuController = controllerFactory.CreateMenuController(&model);
		auto menuObserver = observerFactory.CreateMenuObserver(&model);
		bool processDone = false;
		while (!processDone) {
			processDone = menuController->Process();
		}
		return 0;
	}
}