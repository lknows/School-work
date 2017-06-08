/*************************************************************************
*
*      program name:       TotalUp
*      Author:             Grant Fisher
*      Due Date:           11-4-13
*      remarks:            Creates two arrays with random Numbers.
*                          The second array calculates the total rows
*                          and columns of the first array
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
     int row = 0;                    // row counter
     int col = 0;                    // column counter

     int maxRow = 20;                // max rows
     int maxCol = 10;                // max columns

     int intArray [20][11];          // 2 dimensional array of integers
     int total = 0;                  // Accumulator for all elements
     int totalRow;                   // Accumulator for the elements of each row
     int totalCol;                   // Accumulator for the elements of each column

     // load the array with random numbers from 0 ~ 9
     for(row=0; row<maxRow; row++)
     {
         for(col=0; col<maxCol; col++)
         {
             intArray[row][col] = rand() % 10;
         }
     }

     // print out the initial array
     cout << "\n\n";
     cout << "*******************\n";
     cout << "*  initial array  *\n";
     cout << "*******************\n";
     for(row=0; row<maxRow; row++)
     {
         cout << "\n";
         for(col=0; col<maxCol; col++)
         {
             cout << intArray[row][col] << " ";
         }
     }
     cout << "\n\n";

     //print out the summed up array
     cout << "*******************\n";
     cout << "* summed up array *\n";
     cout << "*******************\n";
     for(row=0; row<maxRow; row++)
     {
         totalRow = 0;  //Resets the Row accumulator

         //sums the rows ***BUT DOES NOT PRINT THOSE CALCULATED SUMS***
         for (col = 0; col < maxCol; col++)
         {
             totalRow += intArray[row][col];
         }

         //Prints the original array while calculating the total
         //value of every element
         cout << "\n";
         for(col=0; col<maxCol; col++)
         {
             cout << intArray[row][col] << " ";
             total += intArray[row][col];
         }
         cout << totalRow;  //***Here is where the row totals are printed***
     }

     //This block of code calculates the column totals:
     cout << "\n";
     for (col = 0; col < maxCol; col++)
     {

     //reset the Column Accumulator
     totalCol = 0;

         for (row = 0; row < maxRow; row++)
         {
             totalCol += intArray[row][col];
         }
         cout << totalCol << " ";
     }

     cout << total << "\n"; //This line prints the total of all the elements in the array



     system("pause");
     return 0;
}  // end main




































