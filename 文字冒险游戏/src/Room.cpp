#include "Room.hpp"

const char* kDirectionNames[4] = {"east", "south", "west", "north"};


Room::Room(const std::string& desc, const std::vector<Item>& items, const std::vector<Enemy>& enemies, const std::vector<Room*>& exits)
    : description(desc), items(items), enemies(enemies), exits(exits) {
    if (this->exits.size() < 4) {
        this->exits.resize(4, nullptr);
    }
}

void Room::setExit(int direction, Room* room) {
    if (direction >= 0 && direction < static_cast<int>(exits.size())) {
        exits[direction] = room;
    }
}

Room* Room::getExit(int direction) const {
    if (direction < 0 || direction >= static_cast<int>(exits.size())) {
        return nullptr;
    }
    return exits[direction];
}

void Room::addItem(const Item& item) {
    items.push_back(item);
}

void Room::removeItem(const std::string& itemName) {
    items.erase(
        std::remove_if(items.begin(), items.end(),
                       [&](const Item& item) { return item.getName() == itemName; }),
        items.end());
}

bool Room::hasItem(const std::string& itemName) const {
    return std::any_of(items.begin(), items.end(),
                       [&](const Item& item) { return item.getName() == itemName; });
}

void Room::addEnemy(const Enemy& enemy) {
    enemies.push_back(enemy);
}

void Room::removeEnemy(const std::string& enemyName) {
    enemies.erase(
        std::remove_if(enemies.begin(), enemies.end(),
                       [&](const Enemy& enemy) { return enemy.getName() == enemyName; }),
        enemies.end());
}

bool Room::hasEnemy(const std::string& enemyName) const {
    return std::any_of(enemies.begin(), enemies.end(),
                       [&](const Enemy& enemy) { return enemy.getName() == enemyName; });
}

void Room::getRoomInfo() const {
   std::cout << "You are in a " << description << "." << std::endl;
    if (!items.empty()) {
        std::cout << "You see the following items: ";
        for (const auto& item : items) {
            std::cout << item.getName() << " ";
        }
        std::cout << std::endl;
    }
    if (!enemies.empty()) {
        std::cout << "You encounter the following enemies: ";
        for (const auto& enemy : enemies) {
            std::cout << enemy.getName() << " ";
        }
        std::cout << std::endl;
    }
}

const std::string& Room::getDescription() const {
    return description;
}

const std::vector<Item>& Room::getItems() const {
    return items;
}

const std::vector<Enemy>& Room::getEnemies() const {
    return enemies;
}

const std::vector<Room*>& Room::getExits() const {
    return exits;
}