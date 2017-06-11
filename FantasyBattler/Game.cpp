#include "Game.h";
#include "GameState.h";
#include "ObserverFactory.h";
#include "ControllerFactory.h";

using namespace GameLogics;

namespace FantasyBattler {
	int Game::Loop() {
		ObserverFactory observerFactory;
		ControllerFactory controllerFactory;
		GameState *state = new MenuGameState(&observerFactory, &controllerFactory);
		while (true) {
			state = state->Process();
			if (!state) {
				break;
			}
		}
		return 0;
	}
}