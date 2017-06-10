#pragma once

namespace GameLogics {
	class BaseController {
	public:
		virtual bool Process() = 0;
	};
}