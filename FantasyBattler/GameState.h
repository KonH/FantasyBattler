#pragma once
#include "ObserverFactory.h";
#include "ControllerFactory.h";

namespace FantasyBattler {
	class GameState {
	protected:
		ObserverFactory *_observerFactory;
		ControllerFactory *_controllerFactory;
		BaseModel *_model;
		BaseController *_controller;
		BaseObserver *_observer;
		GameState* Change(StateTransition transition);
	public:
		GameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory);
		GameState* Process();
	};

	class MenuGameState :public GameState {
	public:
		MenuGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory);
	};

	class StartGameState :public GameState {
	public:
		StartGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory);
	};
}