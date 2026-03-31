#include "Player.hpp"


#include <iostream>

Player::Player(std::string name, int health, int attack, Room* currentRoom)
    : name(name), health(health), attack(attack) {
    setCurrentRoom(currentRoom);
}

bool Player::move(int direction) {
    Room* nextRoom = getCurrentRoom()->getExit(direction);
    if (nextRoom != nullptr) {
        setCurrentRoom(nextRoom);
        return true; // 成功移动
    }
    return false; // 无法移动
}

void Player::pickUpItem(Item item) {
    Room* currentRoom = getCurrentRoom();
    if (currentRoom->hasItem(item.getName())) {
        // 从房间中移除物品并添加到玩家背包
        currentRoom->removeItem(item.getName());
        inventory.push_back(item);
    }
}

void Player::useItem(const std::string& itemName, Enemy& enemy) {
    auto it = std::find_if(inventory.begin(), inventory.end(),
                           [&](const Item& item) { return item.getName() == itemName; });
                           // 查找背包中是否有该物品，返回一个迭代器
    if (it != inventory.end()) {
        if(it->getUseType() == UseType::useable) {
            useeffect effect = it->getUseEffect();
            health += effect.health;
            attack += effect.attack;
            enemy.takeDamage(effect.debuff);
        }
        inventory.erase(it); // 使用后从背包中移除物品
    }
}

void Player::attackEnemy(Enemy& enemy) {
    enemy.takeDamage(attack);
}

void Player::takeDamage(int damage) {
    health -= damage;
}

bool Player::isAlive() {
    return health > 0;
}

const std::vector<Item>& Player::showInventory() const {
    return inventory;
}

void Player::showStatus() const {
    std::cout << "Health: " << health << "\n";
    std::cout << "Attack: " << attack << "\n";
}

Room* Player::getCurrentRoom() const {
    return currentRoom;
}

void Player::setCurrentRoom(Room* room) {
    currentRoom = room;
}