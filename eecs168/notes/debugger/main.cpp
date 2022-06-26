#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int player1 = (rand()%20)+1;
    int player2 = (rand()%20)+1;

    std::cout << "\n1st player roll: " << player1;
    std::cout << "\n2st player roll: " << player2 << std::endl;
        
    if ( player1>player2 )
    {
        std::cout << "Player 1 wins!\n";
    }
    else if (player2>player1 )
    {
        std::cout << "PLayer 2 wins!\n";
    }
    else if (player1==player2)
    {
        std::cout << "It is a tie\n";
    }

	
	return(0);
}

/*
 Random Number Generator (RNG)
 
 1. Seed the RNG
    Provide the seed function, srand, with a value
 
 2. Call rand() to generate a "random number"
 
 Controlling the Range of "Random" Values
    Recall: n%m ==> values between 0 ... (m-1)
 
 int random = 0;
 srand(time(NULL));
 
 std::cout << "Current time: " << time(NULL) << '\n';
 
 for (int i = 1; i <= 5; i++) {
     random = (rand()%6)+1;
     std::cout << "random number = ";
     std::cout << random << '\n';
 }
 
 */

/*
 Make a "roll off" Program.
 Assume two people are using your progam.
 Ask player 1 to roll a 20 sided die and print their roll.
 Then ask player 2 to roll a 20 sided die and print their roll.
 Then print who "won" the roll off (higher roll).
 Print tie, if it is a tie.
 
 srand(time(NULL));
 player1 = (rand()%20)+1;
 player2 = (rand()%20)+1;

 std::cout << “\n1st player roll: “ << player1;
 std::cout << “\n2st player roll: “ << player2 << std::endl;
     
 if ( player1>player2 )
 {
     std::cout << “PLayer 1 wins!\n”;
 }
 else if (player2>player1 )
 {
     std::cout << “PLayer 2 wins!\n”;
 }
 else if (player1==player2)
 {
     std::cout << “It is a tie\n”;
 }

 
 */
