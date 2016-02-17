/*****************************************************
*
*      program name:       ArrayCol
*      Author:             Grant Fisher
*      date due:           11/5/13
*      remarks:            A simple 10x10 array.
*                          Elements are initialized and
*                          printed through nested loops.
*
*****************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>

/**********************
    pre-processor
***********************/
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
//none

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
     /*******************************
     *   local variables            *
     *******************************/
     char monthArray[12][10];
     int rowCounter = 0;

     strcpy(monthArray[0], "January");
     strcpy(monthArray[1], "February");
     strcpy(monthArray[2], "March");
     strcpy(monthArray[3], "April");
     strcpy(monthArray[4], "May");
     strcpy(monthArray[5], "June");
     strcpy(monthArray[6], "July");
     strcpy(monthArray[7], "August");
     strcpy(monthArray[8], "September");
     strcpy(monthArray[9], "October");
     strcpy(monthArray[10], "November");
     strcpy(monthArray[11], "December");

     for(int rowCounter; rowCounter<12; rowCounter++)
     {
         cout << monthArray[rowCounter] << "\n";
     }
     cout << "\n";



system("pause");
    return 0;
}   //end main







