#pragma once
#include "MenuModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
	class MenuView : public BaseObserver {
		MenuModel &_model;
		void Render();
	public:
		MenuView(MenuModel &model);
		void OnModelChanged();
	};
}