#include "inputValidation.hpp"

/*Input Validation function to make sure user enters an integer value of either
 Source:learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
 */

int inputValidationFive()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4 || userInput == 5)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputValidationTwo()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput == 1 || userInput ==2 )
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputValSum()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput >= 0 && userInput <= 100000)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputValTri()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput >= 0 && userInput <= 100000)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputValidation(int n)
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput >= 1 && userInput <= n)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}
