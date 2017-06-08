/**************************************************
*
*      program name:       sdqp_calculation
*      Author:             Grant Fisher
*      date due:           9/24/13
*      remarks:            Finds the sum, difference or
*                          quotient of two numbers
*
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>

/******************************************
*     pre-processor
******************************************/
#define PI 3.14
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
   *     local variables
   ******************************/
   int inNum01;     //Initializes variable for the first number
   int inNum02;     //Initializes varible for the second number
   int sum;         //Initializes variable for the sum
   int diff;        //Initializes variable for the difference
   int product;     //Initializes variable for the product
   float quotient;  //Initializes variable for the quotient
   char operation;  //Initializes variable for the operation

   cout << "This program takes 2 values and finds the sum, difference, product or quotient\n";  //Displays a description of the program
   cout << "of the two numbers.";
   cout << "\n\nSum('s' or 'S'), Difference('d' or 'D'), \nProduct('p' or 'P') ";               //Displays a request for the operation
   cout << "Quotient('q' or 'Q')? ";
   cin >> operation;                                                                            //Assigns input to operation variable
   cout << "What is the first number? ";                                                        //Displays a request for the first number
   cin >> inNum01;                                                                              //Assigns the input value to the inNum01 variable
   cout << "What is the second number? ";                                                       //Displays a request for the second number
   cin >> inNum02;                                                                              //Assigns the input value to the inNum02 variable

   sum = inNum01 + inNum02;                     //calculates the sum of the two numbers
   diff = inNum01 - inNum02;                    //calculates the difference of the two numbers
   product = inNum01 * inNum02;                 //calculates the product of the two numbers
   quotient = (float)inNum01 / (float)inNum02;  //calculates the quotient of the two numbers

   cout << "\n\nThe numbers input were " << inNum01 << " and " << inNum02 << ".";               //Displays the values that were input


   if(operation == 's' || operation == 'S')         //If 's' or 'S' was entered displays the following
   {
        cout << "\n\nThe sum is:    " << sum;       //Displays the sum of the two numbers
   }

   else if(operation == 'd' || operation == 'D')    //If 'd' or 'D' was entered, displays the follwing
   {
        cout << "\nThe difference is:" << diff;     //Displays the difference of the two numbers
   }

   else if(operation == 'p' || operation == 'P')    //If 'p' or 'P' was entered, displays the following
   {
        cout << "\nThe product is:  " << product;   //Displays the calculated product
   }

   else if(operation == 'q' || operation == 'Q')    //If 'q' or 'Q' was entered, displays the following
   {
        cout << "\nThe quotient is:   " << quotient;//Displays the calculated quotient
   }

   else                                             //If none of the previous letters were entered, displays the following
   {
        cout << "\nThe input code of " << operation << " is invalid.";
   }
   cout << "\n\n"; //just adds some space for aesthetic/ocd purposes

   system("PAUSE");               // causes the program to pause
   return 0;
}  // end main

















