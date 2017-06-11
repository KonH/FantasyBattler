#include "StartView.h";
#include <iostream>;

namespace ConsoleSupport {
	StartView::StartView(StartModel *model) {
		_model = model;
		_model->AddObserver(this);
		Render();
	}

	void StartView::OnModelChanged() {
		Render();
	}

	void StartView::Render() {
		system("cls");
		std::cout << _model->GetContent();
	}
}