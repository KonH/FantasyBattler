#include <iostream>;
#include "MenuView.h";

namespace ConsoleSupport {
	MenuView::MenuView(MenuModel *model) {
		_model = model;
		_model->AddObserver(this);
		Render();
	}

	void MenuView::OnModelChanged() {
		Render();
	}

	void MenuView::Render() {
		system("cls");
		int index = _model->GetSelectedIndex();
		auto items = _model->GetItems();
		for (int i = 0; i < items.size(); i++) {
			auto item = items[i];
			if (i == index) {
				std::cout << '[' << item << ']';
			} else {
				std::cout << ' ' << item;
			}
			std::cout << '\n';
		}
	}
}