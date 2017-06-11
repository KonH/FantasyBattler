#pragma once

namespace GameLogics {
	class BaseObserver {
	public:
		virtual void OnModelChanged() = 0;
	};
}