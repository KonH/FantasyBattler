#pragma once
#include "GameState.h";
#include "ObserverFactory.h";
#include "ControllerFactory.h";

namespace FantasyBattler {
	class Game {
		GameState *_state;
		ObserverFactory *_observerFactory;
		ControllerFactory *_controllerFactory;
	public:
		Game();
		~Game();
		int Loop();
	};
}