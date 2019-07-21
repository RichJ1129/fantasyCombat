

#include "Vampire.hpp"

Vampire::Vampire() : Character()
{
    this->name = "Vampire";
    this->setAttack(1, 12);
    this->attackArray = 1;
    this->setDefense(1, 6);
    this->defenseArray = 1;
    this->setStrPoints(18);
    this->setArmor(1);
}

Vampire::Vampire(std::string user)
{
    this->name = user;
    this->setAttack(1, 12);
    this->attackArray = 1;
    this->setDefense(1, 6);
    this->defenseArray = 1;
    this->setStrPoints(18);
    this->setArmor(1);
}

int Vampire::defense(int attPtsIn)
{
    if(specialAbility())
    {
        return 0;
    }
    
    else
    {
        return Character::defense(attPtsIn);
    }
}

bool Vampire::specialAbility()
{
    bool worked = false;
    int rolledNum;
    rolledNum = rand() % 2;

    
    if(rolledNum == 1)
    {
        std::cout << "Vampire had used charm to stop you from attacking" << std::endl;
        worked = true;
    }
    
    return worked;
}
