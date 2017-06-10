#include "MenuModel.h";

namespace GameLogics {
	void MenuModel::NotifyObserver() {
		_observer->OnModelChanged();
	}

	MenuModel::MenuModel() {
	}

	void MenuModel::SetValue(std::string newValue) {
		_content = newValue;
		NotifyObserver();
	}

	std::string MenuModel::GetValue() {
		return _content;
	}

	void MenuModel::AddObserver(MenuObserver *observer) {
		_observer = observer;
	}
}