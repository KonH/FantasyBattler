#pragma once
#include "BaseObserver.h";

namespace GameLogics {
	enum StateTransition { None, Exit, Menu, Start };

	class BaseModel {
	protected:
		BaseObserver *_observer;
		StateTransition _transition;
		void NotifyObserver();
	public:
		virtual ~BaseModel() {};
		void AddObserver(BaseObserver *observer);
		StateTransition GetTransition();
	};
}