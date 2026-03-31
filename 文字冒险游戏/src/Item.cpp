#include "Item.hpp"

Item::Item(std::string name, std::string description, bool pickable, UseType useType, useeffect useEffect)
    : name(name), description(description), pickable(pickable), useEffect(useEffect), useType(useType)
{
}

std::string Item::getName() const {
    return name;
}

std::string Item::getDescription() const {
    return description;
}

bool Item::getPickable() const {
    return pickable;
}
UseType Item::getUseType() const {
    return useType;
}

useeffect Item::getUseEffect() const {
    return useEffect;
}
