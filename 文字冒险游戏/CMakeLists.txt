cmake_minimum_required(VERSION 3.10)
project(AdventureGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(./include)
add_executable(AdventureGame
	./src/main.cpp
	./src/Game.cpp
	./src/Player.cpp
	./src/Room.cpp
	./src/Enemy.cpp
	./src/Item.cpp
)
