
#ifndef BlueMen_hpp
#define BlueMen_hpp

#include <iostream>
#include "Character.hpp"

class BlueMen : public Character
{
public:
    BlueMen();
    BlueMen(std::string);
    int defense(int);
    void specialAbility(int);
};

#endif /* BlueMen_hpp */
