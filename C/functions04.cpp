/********************************************************
*  Name:           function04
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
float hasArgsHasRet(float, float);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
    //variables for the length and width of land
    float length;
    float width;

    //Requests and takes in the dimensions of the land
    cout << "What is the length of the parcel of land (in feet)? ";
    cin >> length;
    cout << "What is the width of the parcel of land (in feet)? ";
    cin >> width;

    //Prints out the length and width of the land
    cout << "\nA parcel of land with the dimensions of\n";
    cout << "   length      " << length << "\n";
    cout << "   width       " << width << "\n";
    cout << "contains ";

    // function call
    cout << hasArgsHasRet(length, width);
    cout << " acres.\n";


     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/
float hasArgsHasRet(float length, float width)
{
    /************************************
    *      local variables
    *************************************/
    //variables for the Square footage and acres of land
    float landSquare;
    float landAcre;

    /************************************
    * Calculations that give you the square
    * footage of land, then converts that
    * value into acres
    *************************************/
    landSquare = length * width;
    landAcre = landSquare / 43560.174;

    //returs the number of acres to main
    return landAcre;
}
