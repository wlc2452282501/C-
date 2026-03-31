#ifndef ITEM_H
#define ITEM_H
#include<string>

enum UseType{
    useable,
    usable_once, // 暂时不可用
    not_useable
};

struct useeffect{
    int health;
    int attack;
    int debuff;
};

class Item{
    private:
        std::string name;
        std::string description;
        bool pickable; // 是否可拾取
        useeffect useEffect;
        UseType useType;
    public:
        Item(std::string name, std::string description, bool pickable, UseType useType,useeffect useEffect);
        std::string getName() const;
        std::string getDescription() const;
        bool getPickable() const;
        UseType getUseType() const;
        useeffect getUseEffect() const;
};
#endif