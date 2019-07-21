

#include "BlueMen.hpp"


BlueMen::BlueMen() : Character()
{
    this->name = "Blue Men";
    this->setAttack(2, 10);
    this->attackArray = 2;
    this->setDefense(3, 6);
    this->defenseArray = 2;
    this->setStrPoints(12);
    this->setArmor(3);
}

BlueMen::BlueMen(std::string user)
{
    this->name = user;
    this->setAttack(2, 10);
    this->attackArray = 2;
    this->setDefense(3, 6);
    this->defenseArray = 2;
    this->setStrPoints(12);
    this->setArmor(3);
}

int BlueMen::defense(int attPtsIn)
{
    int attPts = 0;
    attPts = Character::defense(attPtsIn);
    
    if(getDead() == false)
    {
        specialAbility(attPts);
    }

    return attPts;
}

void BlueMen::specialAbility(int attPtsIn)
{
    int damage = 0;
    int dieN = 0;
    int extraDamage = 0;
    int totalAttack = 0;
   
    if(attPtsIn > 0)
    {
        damage = 12 - getStrPoints();
        dieN = 3 - defenseArray;
        extraDamage = (damage - (dieN * 4) - attPtsIn);
        totalAttack = attPtsIn + extraDamage;
        while(defenseArray > 0 && totalAttack >= 4)
        {
            std::cout << "Blue Men has lost 1 dice due to their special ability" << std::endl;
            delete defenseRoll[defenseArray - 1];
            defenseRoll[defenseArray - 1] = NULL;
            defenseArray -= 1;
            totalAttack -= 4;
            
            if(defenseArray == 0)
            {
                delete [] defenseRoll;
                defenseRoll = NULL;
            }
        }
    }
}
