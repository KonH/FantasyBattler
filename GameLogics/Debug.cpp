#include "Debug.h";
#include <string>;

namespace GameLogics {

	bool Debug::_isStarted = false;

	void Debug::Log(std::string content) {
		std::ofstream file;
		int mode = 0;
		if (Debug::_isStarted) {
			mode = std::ios_base::app;
		} else {
			mode = std::ios_base::trunc;
			Debug::_isStarted = true;
		}
		file.open("debug.log", mode);
		file << content;
		file << '\n';
		file.close();
	}
}
