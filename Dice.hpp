
#ifndef Dice_hpp
#define Dice_hpp

#include <iostream>
#include <ctime>
#include <cstdlib>

class Dice
{
protected:
    int numSides;

public:
    Dice();
    Dice(int);
    void setNumSides(int);
    int getNumSides();
    
    int rollDie() const;
};

#endif /* Dice_hpp */
