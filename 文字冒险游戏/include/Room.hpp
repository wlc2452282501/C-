#ifndef ROOM_H
#define ROOM_H
#include<string>
#include <iostream>
#include <algorithm>
#include<vector>
#include"Item.hpp"
#include"Enemy.hpp"

class Room{
private:
    std::string description;
    std::vector<Item> items;
    std::vector<Enemy> enemies;
    std::vector<Room*> exits;  //东南西北 0 1 2 3

public:
    Room(const std::string& desc, const std::vector<Item>& items, const std::vector<Enemy>& enemies, const std::vector<Room*>& exits);
    void setExit(int direction, Room* room);
    Room* getExit(int direction) const;
    void addItem(const Item& item);
    void removeItem(const std::string& itemName);
    bool hasItem(const std::string& itemName) const;
    void addEnemy(const Enemy& enemy);
    void removeEnemy(const std::string& enemyName);
    bool hasEnemy(const std::string& enemyName) const;
    void getRoomInfo() const;

    const std::string& getDescription() const; // 常量成员函数，返回房间描述
    const std::vector<Item>& getItems() const;
    const std::vector<Enemy>& getEnemies() const;
    const std::vector<Room*>& getExits() const;
};


#endif