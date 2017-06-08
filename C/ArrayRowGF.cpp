/*****************************************************
*
*      program name:       ArrayRow
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
     int numRows = 10;                          // Number of Rows
     int numColumns = 10;                       // Number of Columns
     int arrayName[numRows][numColumns];        // Array with 10 rows and 10 columns.
     int rowCounter;                            // Loop counter for rows.
     int columnCounter;                         // Loop counter for columns.

     //This is the nested loop that initializes the value held
     //in each element of the 2D array:
     for (rowCounter = 0; rowCounter < numRows; rowCounter++)
     {
         for (columnCounter = 0; columnCounter < numColumns; columnCounter++)
         {
             arrayName[rowCounter][columnCounter]= rowCounter;
         }
     }

     //This is the nested loop that prints out the 2D array
     for (rowCounter = 0; rowCounter < numRows; rowCounter++)
     {
         cout << "\n";
         for (columnCounter = 0; columnCounter < numColumns; columnCounter++)
         {
             cout << arrayName[rowCounter][columnCounter] << "   ";
         }
     }

     cout << "\n\n";    //Space to recognize the end of the array.
system("pause");
    return 0;
}   //end main







