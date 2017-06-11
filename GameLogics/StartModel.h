#pragma once
#include "BaseModel.h";
#include <string>;

namespace GameLogics {
	class StartModel :public BaseModel {
		std::string _content;
	public:
		StartModel();
		void Back();
		void Apply();
		std::string GetContent();
	};
}