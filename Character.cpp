

#include "Character.hpp"

Character::Character()
{
    attackRoll = NULL;
    defenseRoll = NULL;
    attackArray = -1;
    defenseArray = -1;
    strPoints = 0;
    armor = 0;
    charDied = false;
}

void Character::setAttack(int attackIn, int nSides)
{
    attackArray = attackIn;
    attackRoll= new Dice *[attackArray];
    for(int i = 0; i < attackArray;i++)
    {
        attackRoll[i] = new Dice(nSides);
    }
}

void Character::setDefense(int defenseIn, int nSides)
{
    defenseArray = defenseIn;
    defenseRoll = new Dice *[defenseArray];
    for(int i = 0; i < defenseArray; i++)
    {
        defenseRoll[i] = new Dice(nSides);
    }
}

void Character::setArmor(int armorIn)
{
    armor = armorIn;
}

void Character::setStrPoints(int strIn)
{
    strPoints = strIn;
}

int Character::getArmor()
{
    return armor;
}

int Character::getStrPoints()
{
    return strPoints;
}

int Character::attackOpp()
{
    int attackStrength = 0;
    
    for(int i = 0; i < attackArray; i++)
    {
        attackStrength += attackRoll[i]->rollDie();
    }
    
    return attackStrength;
}

int Character::defense(int attStrIn)
{
    int defensePts = 0;
    int damage = 0;
    int temp;
    
    for(int i = 0; i < defenseArray; i++)
    {
        defensePts += defenseRoll[i]->rollDie();
    }
    
    damage = attStrIn - defensePts - getArmor();
    temp = getStrPoints();
    
    if(damage >= getStrPoints())
    {
        charDied = true;
        strPoints = 0;
        
        return temp;
    }
    
    if(damage > 0)
    {
        strPoints -= damage;
        return damage;
    }
    
    else
    {
        return 0;
    }
}

bool Character::getDead()
{
    return charDied;
}

Character::~Character()
{
    if ( attackArray > 0 )
    {
        for (int i = 0; i < attackArray; i++)
        {
            delete attackRoll[i];
            attackRoll[i] = NULL;
        }
    }
    if (attackRoll != NULL)
    {
        delete[] attackRoll;
        attackRoll = NULL;
    }
    if ( defenseArray > 0 )
    {
        for (int i = 0; i < defenseArray; i++)
        {
            delete defenseRoll[i];
            defenseRoll[i] = NULL;
        }
    }
    if (defenseRoll != NULL)
    {
        delete[] defenseRoll;
        defenseRoll = NULL;
    }
}

std::string Character::getName()
{
    return name;
}

void Character::recover()
{
    strPoints *= 1.5; 
}
