/*************************************************************************
*
*      program name:       Desk02
*      Author:             Grant Fisher
*      date due:           11-05-13
*      remarks:            Takes in the dimensions and other info
*                          for a number of desks, then calculates the total price.
*
*************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>
/******************************************
*     pre-processor
******************************************/
#define PI  3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /******************************
    *   local variables
    ******************************/
    char lastName[80];      //Holds the last name of the user
    char firstName[80];     //Holds the first name of the user
    float deskLength;       //Holds the length of the desk
    float deskWidth;        //Holds the width of the desk
    int numDrawers;         //Holds the number of drawers
    char woodType;          //HOlds the type of wood material
    float surfaceArea;      //Holds the total surface area of the desk
    float costDrawers;      //Holds the cost of the drawers
    float totalCost;        //Holds the total cost of the desk
    char orderDesk;         //Holds the decision to make a desk
    int mCounter = 0;       //Variable to count the number of Mahogany desks
    int oCounter = 0;       //Variable to count the number of Oak desks
    int pCounter = 0;       //Variable to count the number of Pine desks
    int otherCounter = 0;   //Variable to count the number of "other wood" desks
    int totalCounter = 0;   //Variable to count the total number of desks
    float totalAll = 0;     //Holds the costs of all the desks
    float deskAverage;      //Holds the average costs of the desks


    ///First Read
    cout << "Do you want to order a desk?";
    cin >> orderDesk;

    while(orderDesk == 'y')
    {

    ///Input information
    cout << "Customer Name (First): ";
    cin >> firstName;
    cout << "Customer Name (Last): ";
    cin >> lastName;
    cout << "Preferred length of the desk? (in Inches): ";
    cin >> deskLength;
    cout << "Preferred width of the desk? (in Inches): ";
    cin >> deskWidth;
    cout << "How many drawers would you like? (30.00 each): ";
    cin >> numDrawers;
    cout << "Please choose one of the following types of wood for your desk: ";
    cout << "\n\n     m - Mahogany    (additional charge of $150.00)";
    cout << "\n     o - Oak         (additional charge of $125.00)";
    cout << "\n     p - Pine        (additional charge of $100.00)";
    cout << "\n     (other wood type code no additional charge)";
    cout << "\n\nType of wood selected? (Enter code) ";
    cin >> woodType;

    ///calculations:
    surfaceArea = deskLength * deskWidth;
    costDrawers = numDrawers * 30;

    if (surfaceArea > 750 && woodType == 'm')
    {
        totalCost = 400 + costDrawers;
        mCounter++;
    }

    else if (surfaceArea > 750 && woodType == 'o')
    {
        totalCost = 375 + costDrawers;
        oCounter++;
    }

    else if (surfaceArea > 750 && woodType == 'p')
    {
        totalCost = 350 + costDrawers;
        pCounter++;
    }

    else if (surfaceArea <= 750 && woodType == 'm')
    {
        totalCost = 350 + costDrawers;
        mCounter++;
    }

    else if (surfaceArea <= 750 && woodType =='o')
    {
        totalCost == 325 + costDrawers;
        oCounter++;
    }

    else if (surfaceArea <= 750 && woodType =='p')
    {
        totalCost == 300 + costDrawers;
        pCounter++;
    }

    else
    {
        otherCounter++;
    }

    ///output:
    cout << "\n\nCustomer Name  " << firstName << " " << lastName << "\n";
    cout << "   desk length         " << deskLength << "\n";
    cout << "   desk width          " << deskWidth << "\n";

    if (numDrawers > 0)
        cout << "   number of drawers   " << numDrawers << "\n";

    if (woodType == 'm' || woodType == 'o' || woodType == 'p')
        cout << "   wood type           " << woodType << "\n\n";

    else
        cout << "\n";

    cout << "   cost estimate\n";
    cout << "       $200.00     base cost\n";

    if (surfaceArea > 750)
        cout << "        $50.00     surface area greater than 750 square inches\n";

    else
        cout << "\n";

    if (numDrawers > 0)
        cout << "       " << costDrawers << "          cost of drawers ($30.00 per drawer)\n";

    else
        cout << "\n";

    if (woodType == 'm')
        cout << "       150.00      mahogany\n";

    else if (woodType == 'o')
        cout << "       125.00      oak\n";

    else
        cout << "       100.00      pine\n";

    cout << "       ------------------------\n";
    cout << "       $" << totalCost << "        Total cost\n";
    totalCounter++;
    totalAll = totalAll + totalCost;

    ///Second Read
    cout << "\nDo you want to order another desk?";
    cin >> orderDesk;
    }

    ///Summary Report
    cout << "\n\n\n************ Wood Totals ************\n";
    cout << "       " << mCounter << " Mahogany desks\n";
    cout << "       " << oCounter << " Oak desks\n";
    cout << "       " << pCounter << " Pine desks\n";
    cout << "       " << otherCounter << " Other wood desks";
    cout << "\n\n\n************ Desk Totals ************\n";
    cout << "       Total number of desks                   " << totalCounter << "\n";
    cout << "       Total costs of all desks                " << totalAll;
    cout << "\n\n";

    system("pause");
}  // end main




































