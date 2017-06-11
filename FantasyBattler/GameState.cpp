#include "GameState.h";

namespace FantasyBattler {
	GameState::GameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory) {
		_observerFactory = observerFactory;
		_controllerFactory = controllerFactory;
	}

	GameState* GameState::Process() {
		_controller->Process();
		auto trans = _model->GetTransition();
		if (trans) {
			return GameState::Change(trans);
		}
		return this;
	}

	GameState* GameState::Change(StateTransition transition) {
		switch (transition) {
		case StateTransition::Menu: return new MenuGameState(_observerFactory, _controllerFactory);
		case StateTransition::Start: return new StartGameState(_observerFactory, _controllerFactory);
		default: return NULL;
		}
	}

	MenuGameState::MenuGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory) :
		GameState(observerFactory, controllerFactory) {
		MenuModel *model = new MenuModel;
		_controller = _controllerFactory->CreateMenuController(model);
		_observer = _observerFactory->CreateMenuObserver(model);
		_model = model;
	}

	StartGameState::StartGameState(ObserverFactory *observerFactory, ControllerFactory *controllerFactory) :
		GameState(observerFactory, controllerFactory) {
		StartModel *model = new StartModel;
		_controller = _controllerFactory->CreateStartController(model);
		_observer = _observerFactory->CreateStartObserver(model);
		_model = model;
	}
}