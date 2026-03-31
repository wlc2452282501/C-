#include "Enemy.hpp"


Enemy::Enemy(std::string name, std::string description, int health, int attack, std::vector<Item> drops)
    : name(name), description(description), health(health), attack(attack), drops(drops) {
}

std::string Enemy::getName() const {
    return name;
}

std::string Enemy::getDescription() const {
    return description;
}   
bool Enemy::isAlive() const {
    return health > 0;
}

int Enemy::getHealth() const {
    return health;
}

int Enemy::getAttack() const {
    return attack;
}

const std::vector<Item>& Enemy::getDrops() const {
    return drops;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
}