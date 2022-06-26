/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 4
 * Description:  Exercise 3 Outbreak!
 * 
 * The flu season is upon us and the number of people getting sick is growing.
 * On day 1, there was only 1 person with the flu.
 * On day 2, it jumped to 4.
 * On day 3, there were 21.
 * 
 * Every day since, the number of people who have the flu,
 * is equal to the last 3 days combined.
 * You will make a grogram that will ask the user for what day they want a
 * count of people with the flu for.  Then display the amount.
 * 
 * Sample Runs:
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 1
 * Total people with flu: 1
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 2
 * Total people with flu: 4
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 3
 * Total people with flu: 21
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 4
 * Total people with flu: 26
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 5
 * Total people with flu: 51
 * 
 * OUTBREAK!
 * What day do you want a sick count for?: 0
 * Invalid day
 * 
 * Date: Thu Mar 18 17:28:52 CDT 2021
 *
 ---------------------------------------------------------------------------- */
 
#include <iostream>

int main(){

    int sickCount;
    int sickTotal;
    int day1 = 1;
    int day2 = 4;
    int day3 = 21;
    char newLine = '\n';


    std::string prompt = "What day do you want a sick count for?: ";
    std::string resultPrompt = "Total people with flu: ";

    std::cout << newLine << prompt;
    std::cin >> sickCount;

    for (int i = 1; i <= sickCount; i++) {
        switch (i)
        {
        case 0:
            std::cerr << "Invalid Day";
            break;
        case 1:
            sickTotal = day1;
            break;
        case 2:
            sickTotal = day2;
            break;
        case 3:
            sickTotal = day3;
            break;
        case 4:
            sickTotal = day1 + day2 + day3;
            break;
        default:
            sickTotal = day1 + day2 + day3;
            day1 = day2;
            day2 = day3;
            day3 = sickTotal;
            sickTotal = day1 + day2 + day3;
            break;
        }
    }
    std::cout << resultPrompt;
    std::cout << sickTotal << newLine << newLine;

    return(0);
}