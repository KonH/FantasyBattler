#include "MenuModel.h";

using namespace std;

namespace GameLogics {
	MenuModel::MenuModel() {
		std::string items[] = { "Start", "Exit" };
		_items.assign(items, items + 2);
	}

	void MenuModel::Select(int index) {
		int size = _items.size();
		if (index < 0) {
			index = size - 1;
		}
		if (index >= size) {
			index = 0;
		}
		_selectedIndex = index;
		NotifyObserver();
	}

	int MenuModel::GetSelectedIndex() {
		return _selectedIndex;
	}

	void MenuModel::Apply() {
		_transition = StateTransition::Start;
	}

	void MenuModel::Exit() {
		_transition = StateTransition::Exit;
	}

	strVector MenuModel::GetItems() {
		return _items;
	}
}