

#include "HarryPotter.hpp"


HarryPotter::HarryPotter() : Character()
{
    this->name = "Harry Potter";
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(2, 6);
    this->defenseArray = 2;
    this->setStrPoints(10);
    this->setArmor(0);
    
    revive = false;
}

HarryPotter::HarryPotter(std::string user)
{
    this->name = user;
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(2, 6);
    this->defenseArray = 2;
    this->setStrPoints(10);
    this->setArmor(0);
    
    revive = false;
}

int HarryPotter::defense(int attPtsIn)
{
    int attPts = 0;
    attPts = Character::defense(attPtsIn);
    
    if(getDead() && !revive)
    {
        specialAbility();
    }
    return attPts;
}

void HarryPotter::specialAbility()
{
    std::cout << "Harry Potter has revived himself" << std::endl;
    charDied = false;
    setStrPoints(20);
    revive = true;
}
