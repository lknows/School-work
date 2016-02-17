/*************************************************************************
*
*      program name:       Desk01
*      Author:             Grant Fisher
*      date due:           10-29-13
*      remarks:            Takes in the dimensions and other info
*                          for a desk, then calculates the total price.
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


    ///Input information
    cout << "please enter your first name: ";
    cin >> firstName;
    cout << "please enter your last name: ";
    cin >> lastName;
    cout << "please enter the length of the desk: ";
    cin >> deskLength;
    cout << "please enter the width of the desk: ";
    cin >> deskWidth;
    cout << "please enter the number of drawers: ";
    cin >> numDrawers;
    cout << "please enter the wood type: ";
    cin >> woodType;

    ///calculations:
    surfaceArea = deskLength * deskWidth;
    costDrawers = numDrawers * 30;

    if (surfaceArea > 750 && woodType == 'm')
        totalCost = 400 + costDrawers;

    else if (surfaceArea > 750 && woodType == 'o')
        totalCost = 375 + costDrawers;

    else if (surfaceArea > 750 && woodType == 'p')
        totalCost = 350 + costDrawers;

    else if (surfaceArea <= 750 && woodType == 'm')
        totalCost = 350 + costDrawers;

    else if (surfaceArea <= 750 && woodType =='o')
        totalCost == 325 + costDrawers;

    else if (surfaceArea <= 750 && woodType =='p')
        totalCost == 300 + costDrawers;

    else
        cout << "invalid entry";

    ///output:
    cout << "Customer Name  " << firstName << " " << lastName << "\n";
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

    system("pause");
}  // end main




































