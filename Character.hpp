

#ifndef Character_hpp
#define Character_hpp

#include <iostream>
#include <string>
#include "Dice.hpp"

class Character
{
protected:
    std::string name;
    Dice **attackRoll;
    Dice **defenseRoll;
    int attackArray;
    int defenseArray;
    int strPoints;
    int armor;
    bool charDied;
    
public:
    Character();
    virtual ~Character();
    void setAttack(int, int);
    //void getAttack();
    std::string getName();
    void setDefense(int, int);
    void getDefense();
    void setArmor(int);
    int getArmor();
    void setStrPoints(int);
    int getStrPoints();
    bool getDead();
    virtual int attackOpp();
    virtual int defense(int);
    void recover();
};

#endif /* Character_hpp */
