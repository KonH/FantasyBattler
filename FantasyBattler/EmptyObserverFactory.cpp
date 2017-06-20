#ifdef TEST
#ifndef CONSOLE
#include "ObserverFactory.h";

namespace FantasyBattler {
	class EmptyView :public BaseObserver {
	public:
		void OnModelChanged() {}
	};

	BaseObserver* ObserverFactory::CreateMenuObserver(MenuModel &model) {
		return new EmptyView();
	}

	BaseObserver* ObserverFactory::CreateStartObserver(StartModel &model) {
		return new EmptyView();
	}
}
#endif
#endif