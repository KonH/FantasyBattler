#include "Game.h";

using namespace GameLogics;

namespace FantasyBattler {
	Game::Game():
		_observerFactory(*new ObserverFactory()),
		_controllerFactory(*new ControllerFactory()) {
		_state = new MenuGameState(_observerFactory, _controllerFactory);
	}

	Game::~Game() {
		delete _state;
		delete &_observerFactory;
		delete &_controllerFactory;
	}

	int Game::Loop() {
		while (true) {
			_state = _state->Process();
			if (!_state) {
				break;
			}
		}
		return 0;
	}
}