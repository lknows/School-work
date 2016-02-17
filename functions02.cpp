/********************************************************
*  Name:           function02
*  Author:         Grant Fisher
*  Date due:       01/27/14 2:30
*  Description:    basic C++ program that takes in the
*                  dimensions of a parcel of land
*                  and converts the value into acres.
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cstdlib>
using namespace std;

/************************************
*     defines
*************************************/
#define  PI  3.14159

/*************************************
*     function prototype
*************************************/
float noArgsHasRet();

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/

     // function call
     cout << noArgsHasRet();
     cout << " acres.\n";

     // Prints out the number of

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/
float noArgsHasRet()
{
    /************************************
    *      local variables
    *************************************/
    float landSquare;
    float landAcre;
    float length;
    float width;

    //Requests and takes in the dimensions of the land
    cout << "What is the length of the parcel of land (in feet)? ";
    cin >> length;
    cout << "What is the width of the parcel of land (in feet)? ";
    cin >> width;

    cout << "\nA parcel of land with the dimensions of\n";
    cout << "   length      " << length << "\n";
    cout << "   width       " << width << "\n";

    /************************************
    * Calculations that give you the square
    * footage of land, then converts that
    * value into acres
    *************************************/
    landSquare = length * width;
    landAcre = landSquare / 43560.174;

    cout << "contains ";

    return landAcre;
}
