#include <iostream>;
#include "MenuView.h";

namespace ConsoleSupport {
	MenuView::MenuView(MenuModel *model) {
		_model = model;
		_model->AddObserver(this);
	}

	void MenuView::OnModelChanged() {
		Render();
	}

	void MenuView::Render() {
		system("cls");
		std::string value = _model->GetValue();
		std::cout << value;
	}
}