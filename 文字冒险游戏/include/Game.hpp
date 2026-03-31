#ifndef GAME_HPP
#define GAME_HPP
#include "Player.hpp"
#include "Room.hpp"

class Game{
    private:
        Player player;
        std::vector<Room> rooms;
        bool isRunning;
    public:
        Game();
        ~Game();
        void run();
        void processCommand(const std::string& command); // 处理玩家输入的命令  
        void createWorld(); // 创建游戏世界，包括房间、物品和敌人
        void cleanup(); // 清理游戏资源的函数
};
#endif