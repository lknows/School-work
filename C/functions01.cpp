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
void hasArgsNoRet(float, float);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
    float length;
    float width;

    //Requests and takes in the dimensions of the land
    cout << "What is the length of the parcel of land (in feet)? ";
    cin >> length;
    cout << "What is the width of the parcel of land (in feet)? ";
    cin >> width;

     // function call
     hasArgsNoRet(length, width);

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/
void hasArgsNoRet(float length, float width)
{
    /************************************
    *      local variables
    *************************************/
    float landSquare;
    float landAcre;

    /************************************
    * Calculations that give you the square
    * footage of land, then converts that
    * value into acres
    *************************************/
    landSquare = length * width;
    landAcre = landSquare / 43560.174;

    ///Output from calculations
    cout << "\nA parcel of land with the dimensions of\n";
    cout << "   length      " << length << "\n";
    cout << "   width       " << width << "\n";

    cout << "contains " << landAcre << " acres.\n";


}
