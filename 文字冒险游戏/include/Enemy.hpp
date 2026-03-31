#ifndef ENEMY_H
#define ENEMY_H
#include<string>
#include<vector>
#include"Item.hpp"


class Enemy {
private:
    std::string name;
    std::string description;
    int health;
    int attack;
    std::vector<Item> drops; // 敌人掉落的物品列表
public:
    Enemy(const std::string name, std::string description, int health, int attack, std::vector<Item> drops);
    std::string getName() const;
    std::string getDescription() const;
    bool isAlive() const; // 判断敌人是否还活着
    void takeDamage(int damage); // 受到伤害的函数，修改敌人的生命值
    int getHealth() const;
    int getAttack() const;
    const std::vector<Item>& getDrops() const; // 常量成员函数，返回敌人掉落的物品列表
};
#endif