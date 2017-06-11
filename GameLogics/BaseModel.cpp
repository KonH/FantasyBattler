#include "BaseModel.h";

namespace GameLogics {
	void BaseModel::NotifyObserver() {
		_observer->OnModelChanged();
	}

	StateTransition BaseModel::GetTransition() {
		return _transition;
	}

	void BaseModel::AddObserver(BaseObserver *observer) {
		_observer = observer;
	}
}