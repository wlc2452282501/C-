#include "Game.hpp"

#include <exception>
#include <iostream>

int main(int argc, char* argv[]) {
	try {
		Game game;
		game.run();
	} catch (const std::exception& e) {
		std::cerr << "游戏运行异常: " << e.what() << '\n';
		return -1;
	} catch (...) {
		std::cerr << "游戏发生未知异常\n";
		return -1;
	}

	return 0;
}
