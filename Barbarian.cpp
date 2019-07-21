
#include "Barbarian.hpp"

Barbarian::Barbarian() : Character()
{
    this->name = "Barbarian";
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(2, 6);
    this->defenseArray = 2;
    this->setStrPoints(12);
    this->setArmor(0);
}

Barbarian::Barbarian(std::string user)
{
    this->name = user;
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(2, 6);
    this->defenseArray = 2;
    this->setStrPoints(12);
    this->setArmor(0);
}
