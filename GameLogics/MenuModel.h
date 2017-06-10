#pragma once
#include "MenuObserver.h";
#include <string>;
#include <vector>;

namespace GameLogics {
	typedef std::vector<std::string> strVector;
	
	class MenuModel {
		std::vector<std::string> _items;
		int _selectedIndex;
		MenuObserver *_observer;
		void NotifyObserver();
	public:
		MenuModel();
		void Select(int index);
		int GetSelectedIndex();
		strVector GetItems();
		void AddObserver(MenuObserver *observer);
	};
}