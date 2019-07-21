
#include "Menu.hpp"


int menu()
{
    int userInput = 0;
    std::cout << "Please select your Character from the list below" << std::endl;
    std::cout << "1: Barbarian" << std::endl;
    std::cout << "2: Blue Men" << std::endl;
    std::cout << "3: Harry Potter" << std::endl;
    std::cout << "4: Vampire" << std::endl;
    std::cout << "5: Medusa" << std::endl;
    
    userInput = inputValidationFive();

    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
            
        case 3:
            return 3;
            
        case 4:
            return 4;
            
        case 5:
            return 5;
    }
    
    return 0;    
}

int playAgainMenu()
{
    int userInput = 0;
    std::cout << "1: Play Again" << std::endl;
    std::cout << "2: Exit the Program." << std::endl;
    
    userInput = inputValidationTwo();
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
    }
    
    return 0;
}

int startMenu()
{
    int userInput = 0;
    std::cout << "1: Start Game" << std::endl;
    std::cout << "2: Exit the Program." << std::endl;
    
    userInput = inputValidationTwo();
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
    }
    
    return 0;
}

Character  *charChoice()
{
    Character *p1;
    
    int userInput = 0;
    std::string charName;
    
    std::cout << "Please select your Character from the list below" << std::endl;
    std::cout << "1: Barbarian" << std::endl;
    std::cout << "2: Blue Men" << std::endl;
    std::cout << "3: Harry Potter" << std::endl;
    std::cout << "4: Vampire" << std::endl;
    std::cout << "5: Medusa" << std::endl;
    
    userInput = inputValidationFive();
    
    std::cout << "Enter the name of the character: ";
    getline(std::cin, charName);

    switch(userInput)
    {
        case 1:
        {
            p1 = new Barbarian(charName);
            break;
        }
            
        case 2:
        {
            p1 = new BlueMen(charName);
            break;
        }
            
        case 3:
        {
            p1 = new HarryPotter(charName);
            break;
        }
            
        case 4:
        {
            p1 = new Vampire(charName);
            break;
        }
            
        case 5:
        {
            p1 = new Medusa(charName);
            break;
        }
    }
    
    return p1;
}

void fighterName(Player *userName) //Source: cplusplus.com/forum/general/21246/
{
    if(typeid(Barbarian) == typeid(*userName->characters.getHead()))
    {
        std::cout << "Barabarian class by the name of ";
    }
    
    else if(typeid(BlueMen) == typeid(*userName->characters.getHead()))
    {
        std::cout << "BlueMen class by the name of ";
    }
    
    else if(typeid(HarryPotter) == typeid(*userName->characters.getHead()))
    {
        std::cout << "Harry Potter class by the name of ";
    }
    
    else if(typeid(Medusa) == typeid(*userName->characters.getHead()))
    {
        std::cout << "Medusa class by the name of ";
    }
    
    else if(typeid(Vampire) == typeid(*userName->characters.getHead()))
    {
        std::cout << "Vampire class by the name of ";
    }
    
    std::cout << userName->characters.getHead()->getName();
}

int loserMenu()
{
    int userInput = 0;
    std::cout << "Would you like to display the losers list?" << std::endl;
    std::cout << "1: Yes" << std::endl;
    std::cout << "2: No" << std::endl;
    
    userInput = inputValidation(2);
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
    }
    
    return 0;
}
