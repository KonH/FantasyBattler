#pragma once
#include "MenuObserver.h";
#include <string>

namespace GameLogics {
	class MenuModel {
		std::string _content;
		MenuObserver *_observer;
		void NotifyObserver();
	public:
		MenuModel();
		void SetValue(std::string newValue);
		std::string GetValue();
		void AddObserver(MenuObserver *observer);
	};
}