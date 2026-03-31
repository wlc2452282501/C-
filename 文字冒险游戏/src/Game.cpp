#include "Game.hpp"

Game::Game() : player("Hero", 100, 10, nullptr), isRunning(false) {}

Game::~Game() {
    cleanup();
}

void Game::processCommand(const std::string& command){ 
    // 这里可以根据玩家输入的命令来执行相应的操作
    if(command == "start"){
        std::cout << "游戏开始！\n";
    } else if(command == "look"){
        player.getCurrentRoom()->getRoomInfo();
    }else if(command == "exit"){
        isRunning = false; // 退出游戏
    } else {
        std::cout << "未知命令: " << command << std::endl;
    }
}
void Game::run(){
    createWorld(); // 创建游戏世界
    isRunning = true;
    std::string command;

    while(isRunning){
        std::cout << "请输入命令: ";
        std::getline(std::cin, command);
        processCommand(command); // 处理玩家输入的命令
    }
    cleanup(); // 清理游戏资源
}

 void Game::createWorld(){
     rooms.clear();
    std::vector<Item> items = { Item("Sword", "A sharp blade", true, UseType::useable, {0, 5, 0}), Item("Shield", "A sturdy shield", true, UseType::useable, {0, 0, 0}) };
     std::vector<Enemy> enemies = { Enemy("Goblin", "A small goblin", 10, 5, {}) };
    std::vector<Room*> exits = { nullptr, nullptr, nullptr, nullptr }; // 东南西北
     rooms.emplace_back("房间1", items, enemies, exits);
     player.setCurrentRoom(&rooms[0]);
 }

 void Game::cleanup(){
     rooms.clear();
     player.setCurrentRoom(nullptr);
 }