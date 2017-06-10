#include "MenuModel.h";

using namespace std;

namespace GameLogics {
	MenuModel::MenuModel() {
		std::string items[] = {"Start", "Exit"};
		_items.assign(items, items + 2);
	}

	void MenuModel::NotifyObserver() {
		_observer->OnModelChanged();
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

	strVector MenuModel::GetItems() {
		return _items;
	}

	void MenuModel::AddObserver(MenuObserver *observer) {
		_observer = observer;
	}
}