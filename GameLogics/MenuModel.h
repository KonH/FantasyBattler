#pragma once
#include "BaseModel.h";
#include <string>;
#include <vector>;

namespace GameLogics {
	typedef std::vector<std::string> strVector;

	class MenuModel:public BaseModel {
		std::vector<std::string> _items;
		int _selectedIndex;
	public:
		MenuModel();
		void Select(int index);
		int GetSelectedIndex();
		void Exit();
		void Apply();
		strVector GetItems();
	};
}