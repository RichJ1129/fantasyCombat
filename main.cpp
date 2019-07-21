/*********************************************************************
 ** Program name: Fantasy Combat Tournament
 ** Author: Richard Joseph
 ** Date: 5/26/19
 ** Description: Combat Tournament. Characters of different ability fight until
                 all character's on one team are dead.
 *********************************************************************/

#include <iostream>
#include "Menu.hpp"

int main()
{
    srand(time(0));
    int playAgain = 0;
    int start = 0;
    
    Player player1;
    Player player2;
    
    Queue losersPool;
    
    
    std::cout << "Welcome to the Fantasy Combat Game" << std::endl;
    start = startMenu();
    
    while(start != 2 && playAgain != 2)
    {
        int roundNum = 1;
        int loserList = 0;
        int team1Members = 0;
        int team2Members = 0;
        

        player1.points = 0;
        player2.points = 0;
        
        std::cout << "How many characters would you like to have on Team 1 (1 - 100)" << std::endl;
        team1Members = inputValidation(100);
        
        for(int i = 0; i < team1Members; i++)
        {
            std::cout << "Choose character " << i + 1 << ": " << std::endl;
            player1.characters.addTail(charChoice());
        }
        
        std::cout << "How many characters would you like to have on Team 2 (1 - 100)" << std::endl;
        team2Members = inputValidation(100);
        
        for(int j = 0; j < team2Members; j++)
        {
            std::cout << "Choose character " << j + 1 << ": " << std::endl;
            player2.characters.addTail(charChoice());
        }
    
        while(!player1.characters.isEmpty() && !player2.characters.isEmpty())
        {
            std::cout << "Round " << roundNum << std::endl;
            std::cout << "Team 1's fighter's ";
            fighterName(&player1);
            std::cout << " vs. Team 2's fighter's ";
            fighterName(&player1);
            std::cout << std::endl;
            
            while(player1.characters.getHead()->getStrPoints() > 0 && player2.characters.getHead()->getStrPoints() > 0)
            {
                std::cout << "Team 1 attack: ";
                player1.attack = player1.characters.getHead()->attackOpp();
                std::cout << player1.attack << std::endl;
                std::cout << "Team 2 defense: ";
                std::cout << player2.characters.getHead()->defense(player1.attack);
                std::cout << std::endl;
                
                if(player2.characters.getHead()->getStrPoints() > 0)
                {
                    std::cout << "Team 2 attack: ";
                    player2.attack = player2.characters.getHead()->attackOpp();
                    std::cout << player2.attack << std::endl;
                    std::cout << "Team 1 defense: ";
                    std::cout << player1.characters.getHead()->defense(player2.attack);
                }
            
                std::cout << std::endl;
            }
            
            if(player1.characters.getHead()->getStrPoints() > 0)
            {
                std::cout << "Team 1's ";
                fighterName(&player1);
                losersPool.addHead(player2.characters.getHead());
                player2.characters.removeFront();
                player1.characters.addTail(player1.characters.getHead());
                player1.characters.removeFront();
                player1.characters.getTail()->recover();
                player1.points++;
            }
        
            else
            {
                std::cout << "Team 2's ";
                fighterName(&player2);
                losersPool.addHead(player1.characters.getHead());
                player1.characters.removeFront();
                player2.characters.addTail(player2.characters.getHead());
                player2.characters.removeFront();
                player2.characters.getTail()->recover();
                player2.points++;
            }
        
            std::cout << " has won the round" << std::endl;
            roundNum++;
        }
        
        std::cout << "Team 1 points: " << player1.points << std::endl;
        std::cout << "Team 2 points: " << player2.points << std::endl;
        
        if(player1.points > player2.points)
        {
            std::cout << "Team 1 wins" << std::endl;
        }
        
        else if(player1.points < player2.points)
        {
            std::cout << "Team 2 wins" << std::endl;
        }
        
        else
        {
            std::cout << "There was a draw" << std::endl;
        }
        

        loserList = loserMenu();
        
        while(loserList != 2)
        {
            std::cout << "Loser's list: " << std::endl;
            losersPool.traverseList();
            loserList = 2;
        }
        
        std::cout << std::endl;
        
        player1.characters.~Queue();
        player2.characters.~Queue();
        losersPool.~Queue();
        
        playAgain = playAgainMenu();
    }
    
    return 0;
}
