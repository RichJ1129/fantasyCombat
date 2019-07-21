

#ifndef Medusa_hpp
#define Medusa_hpp

#include <iostream>
#include "Character.hpp"

class Medusa : public Character
{
public:
    Medusa();
    Medusa(std::string);
    int attackOpp();
    void specialAbility(int &);
};

#endif /* Medusa_hpp */
