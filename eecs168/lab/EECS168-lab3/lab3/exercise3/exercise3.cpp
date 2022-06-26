/* -----------------------------------------------------------------------------
 *
 * File Name:  exercise2.cpp
 * Author: Morgan Bergen
 * Assignment:   EECS-168/169 Lab 3
 * Description:
 Resturant:
 You will open a resturant that sells three items:
 Salad ($3.50 each)
 Pizza ($7.25 each)
 Ice Cream ($5.50)
 Your resturant will do the following:
 1. Ask the user if they want Salad then Pizza then Ice Cream
    In all cases, you are prompting them for a yes/no answer.
    For yes they can type 'y' or 'Y', and for no they can type 'n' or 'N'
    If they want an item, find out how many
    The user must not be allowed to order less than zero of an item.
    If they do, simply set the amount they order to zero.
 2. Ask them for their age, this will affect the discount
    Anyone 55 or older gets a 10% discount off the total cost AFTER tax
    Anyone 8 or younger gets all the ice cream they want for free (this is not taxed)
3.  Diplay a cost per item (before any discounts), a subtotal (before any discounts), a tax amount, a discount amount, and a grand total.
    Tax is 25%
 Sample Run:
 ============================
 WELCOME TO THE RESTAURANT
 ============================
 Do you want Salad? (y/n): y
 How many?: 10

 Do you want Pizza? (y/n): N

 Do you want Ice cream? (y/n): Y
 How many?: 10

 How old are you?: 4
 ============================
 10 Salads @ $3.50 ==> $35.00
 0 Pizza @ $7.25 ==> $0.00
 10 Ice Cream @ $5.50 ==> $55.00
 Subtotal: $35.00
 Tax: $8.75
 Discount: $55.00
 ============================
 Total: $43.75

 Please come again!
 
 NOTE: For the rounding to two digits use this:
 int main()
 {
    std::cout.precision(2);
    std::cout << std::fixed;
    //rest of your program below...
 
 * Date: Fri Mar 12 10:45:36 CST 2021
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

int main(){
    
    std::cout.precision(2);
    std::cout << std::fixed;
    
    int saladCount, pizzaCount, creamCount;
    double saladPrice = 3.50;
    double pizzaPrice = 7.25;
    double creamPrice = 5.50;
    int age;
    char answer;
    
    std::cout   <<
    "============================\nWELCOME TO THE RESTAURANT\n============================"
                << std::endl;
    
    std::cout << "Do you want Salad? (y/n): ";
    std::cin >> answer;
    
    if (answer == 'y' || answer == 'Y') {
        std::cout << "How many?: ";
        std::cin >> saladCount;
        if (saladCount <= 0) {
            saladCount = 0;
        }
    } else {
        saladCount = 0;
    }
    
    std::cout << "\nDo you want Pizza? (y/n): ";
    std::cin >> answer;
    
    if (answer == 'y' || answer == 'Y') {
        std::cout << "How many?: ";
        std::cin >> pizzaCount;
        if (pizzaCount <= 0) {
            pizzaCount = 0;
        }
    } else {
        pizzaCount = 0;
    }
    
    std::cout << "\nDo you want Ice Cream? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y') {
        std::cout << "How many?: ";
        std::cin >> creamCount;
        if (creamCount <= 0) {
            creamCount = 0;
        }
    } else {
        creamCount = 0;
    }
    
    double saladTotal = (double)saladCount*saladPrice;
    double pizzaTotal = (double)pizzaCount*pizzaPrice;
    double creamTotal = (double)creamCount*creamPrice;
    double subTotal = (saladTotal + pizzaTotal + creamTotal);
    
    std::cout << "\nHow old are you?: ";
    std::cin >> age;
    
    std::cout << "============================" << std::endl;
    std::cout << saladCount << " Salads @ $" << saladPrice << " ==> $" << saladTotal << std::endl;
    std::cout << pizzaCount << " Pizza @ $" << pizzaPrice << " ==> $" << pizzaTotal << std::endl;
    std::cout << creamCount << " Ice Cream @ $" << creamPrice << " ==> $" << creamTotal << std::endl;
    std::cout << "Subtotal: $" << subTotal;
    
    
    /*
     subtotal = 90
     subtotal - discount
     */
    
    if (age >= 65) {
        double tax = ((subTotal*0.10)*(0.25));
        double discount = (subTotal*0.10);
        std::cout << "\nTax: $" << tax << std::endl;
        std::cout << "Discount: $" << discount << std::endl;
        std::cout << "============================" << std::endl;
        std::cout << "Total: $" << ((subTotal + tax)-discount) << std::endl;
    } else if  (age <= 12) {
        double discount = creamTotal;
        double tax = ((subTotal-creamTotal)*(0.25));
        std::cout << "\nTax: $" << tax << std::endl;
        std::cout << "Discount: $" << discount << std::endl;
        std::cout << "============================" << std::endl;
        std::cout << "Total: $" << ((subTotal + tax)-creamTotal) << std::endl;
    } else {
        double tax = (subTotal*(0.25));
        std::cout << "\nTax: $" << tax << std::endl;
        std::cout << "Discount: $0.00" << std::endl;
        std::cout << "============================" << std::endl;
        std::cout << "Total: $" << (subTotal + tax) << std::endl;
    }
    std::cout << "\nPlease come again!" << std::endl;

    return(0);
}


