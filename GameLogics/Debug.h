#pragma once
#include <fstream>;

namespace GameLogics {
	class Debug
	{
	private:
		static bool _isStarted;
	public:
		static void Log(std::string content);
	};
}

#ifdef DEBUG
#	define Debug(x) Debug::Log(x)
#else
#	define Debug(x)
#endif