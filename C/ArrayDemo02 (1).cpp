/*****************************************************
*
*      program name:       Array demo
*      Author:             Grant Fisher
*      date due:           11/16/09
*      remarks:            array
                           1.  collection of
                               like data types
                           2.  share a name
                           3.  refferenced with an index
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
     int rowCounter;
     int columnCounter;

     for (rowCounter = 0; rowCounter < numRows; rowCounter++)
     {
         for (columnCounter = 0; columnCounter < numColumns; columnCounter++)
         {
             arrayName[rowCounter][columnCounter]= rowCounter;
         }
     }

     for (rowCounter = 0; rowCounter < numRows; rowCounter++)
     {
         cout << "\n";
         for (columnCounter = 0; columnCounter < numColumns; columnCounter++)
         {
             cout << arrayName[rowCounter][columnCounter] << "   ";
         }
     }

     cout << "\n\n";
system("pause");
    return 0;
}







