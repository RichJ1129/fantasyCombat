

#ifndef HarryPotter_hpp
#define HarryPotter_hpp

#include <iostream>
#include "Character.hpp"

class HarryPotter : public Character
{
private:
    bool revive;
    
public:
    HarryPotter();
    HarryPotter(std::string);
    int defense(int);
    void specialAbility();
};

#endif /* HarryPotter_hpp */
