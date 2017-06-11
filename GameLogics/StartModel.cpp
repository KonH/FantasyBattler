#include "StartModel.h";

namespace GameLogics {
	StartModel::StartModel() {
		_content = "It is start";
	}

	void StartModel::Back() {
		_transition = StateTransition::Menu;
	}

	void StartModel::Apply() {
		_transition = StateTransition::Start;
	}

	std::string StartModel::GetContent() {
		return _content;
	}
}