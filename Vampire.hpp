

#ifndef Vampire_hpp
#define Vampire_hpp

#include <iostream>
#include "Character.hpp"

class Vampire : public Character
{
public:
    Vampire();
    Vampire(std::string);
    int defense(int);
    bool specialAbility();
};

#endif /* Vampire_hpp */
