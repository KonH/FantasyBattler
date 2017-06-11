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
		virtual ~GameState();
		GameState* Process();
	};

	class MenuGameState :public GameState {
	public:
		MenuGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory);
		~MenuGameState() {};
	};

	class StartGameState :public GameState {
	public:
		StartGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory);
		~StartGameState() {};
	};
}