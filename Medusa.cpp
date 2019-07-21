

#include "Medusa.hpp"

Medusa::Medusa() : Character()
{
    this->name = "Medusa";
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(1, 6);
    this->defenseArray = 1;
    this->setStrPoints(12);
    this->setArmor(3);
}

Medusa::Medusa(std::string user)
{
    this->name = user;
    this->setAttack(2, 6);
    this->attackArray = 2;
    this->setDefense(1, 6);
    this->defenseArray = 1;
    this->setStrPoints(12);
    this->setArmor(3);
}

int Medusa::attackOpp()
{
    int attPts = 0;
    
    for(int i = 0; i < attackArray; i++)
    {
        attPts += attackRoll[i]->rollDie();
    }
    
    if(attPts == 12)
    {
        specialAbility(attPts);
    }
    
    return attPts;
}

void Medusa::specialAbility(int &attPtsIn)
{
    std::cout << "Medusa's ability has triggered and turned you into stone" << std::endl;
    attPtsIn = 999;
}
