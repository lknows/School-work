/**************************************************                
* 
*      program name:       ConvertTemp01
*      Author:             Grant Fisher
*      date due:           10-1-13
*      remarks:            No comments
*                           
*
***************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>                // needed for I/O

/******************************************
*     pre-processor
******************************************/
#define PI 3.141592653589793238462643383279507528841971
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
   
   int inTemp;                                                                 //Initializes variable
   float F, C;                                                                 //Initializes variable
   
   cout << "This program converts an input number to Celsius and Fahrenheit."; //Describes the program
   cout << "\nPlease input a number and press enter.  ";                       //Requests an input number
   cin >> inTemp;                                                              //Assigns the input value to inTemp
   
   F = 9/5*inTemp + 32;                                                        //Calculates Fahrenheit value
   C = 5/9*(inTemp-32);                                                        //Calculates Celsius value
   
   cout << inTemp << " is " << F << " in Fahrenheit.\n";                       //Displays the calculated Fahrenheit value
   cout << inTemp << " is " << C << " in Celsius.\n";                          //Displays the calculated Celsius value
   
   
   system("PAUSE");                                                            // causes the program to pause
   return 0;
}  // end main

     
     
    











 

