//
//  Barbarian.hpp
//  FantasyCombat
//
//  Created by Richard Joseph on 5/13/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef Barbarian_hpp
#define Barbarian_hpp

#include <iostream>
#include "Character.hpp"
//#include "Dice.hpp"

class Barbarian : public Character
{
public:
    Barbarian();
    Barbarian(std::string);
};


#endif /* Barbarian_hpp */
