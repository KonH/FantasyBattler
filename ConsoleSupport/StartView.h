#pragma once
#include "StartModel.h";

using namespace GameLogics;

namespace ConsoleSupport {
	class StartView : public BaseObserver {
		StartModel &_model;
		void Render();
	public:
		StartView(StartModel &model);
		void OnModelChanged();
	};
}