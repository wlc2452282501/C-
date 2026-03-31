#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<vector>
#include"Item.hpp"
#include <algorithm>
#include"Room.hpp"

class Player {
private:
    std::string name;
    int health;
    int attack;
    std::vector<Item> inventory; // 玩家背包，存储玩家拥有的物品
    Room* currentRoom; // 玩家当前所在的房间
public:
    Player(std::string name, int health, int attack, Room* currentRoom);
    bool move(int direction); // 移动函数，参数表示移动的方向
    void pickUpItem(Item item); // 捡起物品的函数，参数为物品对象
    void useItem(const std::string& itemName,Enemy& enemy); // 使用物品的函数，参数为物品名称和敌人对象
    void attackEnemy(Enemy& enemy); // 攻击敌人的函数，参数为敌人对象
    void takeDamage(int damage); // 受到伤害的函数，修改玩家的生命值
    bool isAlive(); // 判断玩家是否还活着
    const std::vector<Item>& showInventory() const; // 显示玩家背包内容的函数，常量成员函数
    void showStatus() const;
    Room* getCurrentRoom() const; // 获取玩家当前所在房间的函数，常量成员函数
    void setCurrentRoom(Room* room); // 设置玩家当前所在房间的函数
};
#endif