#ifndef Menu_hpp
#define Menu_hpp

#include <iostream>
#include <typeinfo>
#include "Queue.hpp"
#include "inputValidation.hpp"

class Player
{
    
public:
    Queue characters;
    int attack;
    int points;
};

Character *charChoice();
int startMenu();
int menu();
int playAgainMenu();
void fighterName(Player *);
int loserMenu();


#endif /* Menu_hpp */
