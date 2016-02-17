/********************************************************
*  Name:           function01
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
void noArgsNoRet();

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
     // function call
     noArgsNoRet();

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/
void noArgsNoRet()
{
    /************************************
    *      local variables
    *************************************/
    float landLength;
    float landWidth;
    float landSquare;
    float landAcre;

    //Requests and takes in the dimensions of the land
    cout << "What is the length of the parcel of land (in feet)? ";
    cin >> landLength;
    cout << "What is the width of the parcel of land (in feet)? ";
    cin >> landWidth;
    cout << "\nA parcel of land with the dimensions of\n";
    cout << "   length      " << landLength << "\n";
    cout << "   width       " << landWidth << "\n";

    /************************************
    * Calculations that give you the square
    * footage of land, then converts that
    * value into acres
    *************************************/
    landSquare = landLength * landWidth;
    landAcre = landSquare / 43560.174;

    cout << "contains " << landAcre << " acres.\n";


}
