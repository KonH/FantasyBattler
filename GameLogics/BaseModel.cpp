#include "BaseModel.h";

namespace GameLogics {
	void BaseModel::AddObserver(BaseObserver *observer) {
		_observer = observer;
	}

	void BaseModel::NotifyObserver() {
		_observer->OnModelChanged();
	}

	StateTransition BaseModel::GetTransition() {
		return _transition;
	}

}