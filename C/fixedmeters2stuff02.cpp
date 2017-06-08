/**************************************************
*
*      program name:       Meters2stuff01
*      Author:             Grant Fisher
*      date due:           10-17-13
*      remarks:            This program converts meters to
*                          Other various units of measurement.
*
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

   int m;
   char unit;                                                                   //initiailizes the variable that will hold the various units of measurements
   float yard;
   float feet;
   float mile;
   float kilometer;
   float nautical;
   float league;
   float rod;
   float cubit;
   float span;

   cout << "This program converts meters into other units of measurement.\n";   //Displays a description
   cout << "What is the number of meters?";                                     //Requests the number of meters
   cin >> m;                                                                    //Assigns the input to the 'm' variable
   cout << "What is the character code?";                                       //Requests a character code
   cin >> unit;                                                                 //Assigns the input to the 'unit' variable

   yard =       m * 1.09;                                                       //Calculations for other units of measurment.
   feet =       m * 3.280;
   mile =       m * 0.00062;
   kilometer =  m * 0.00100;
   nautical =   m * 0.000539;
   league =     m * 0.000179;
   rod =        m * 0.198;
   cubit =      m * 2.187;
   span =       m * 4.374;

   cout << m << "   in meters is ";                                             //Displays the input number of meters

   if ((unit == 'y') || (unit == 'Y'))                                              //if true Calculates meters to yards
   {
   cout << "    " << yard << "  in yards.\n";
   }

   else if (unit == 'f' || unit == 'F')                                         //if true, calculates meters to feet
   {
   cout << "    " << feet << "  in feet.\n";
   }

   else if (unit == 'm' || unit == 'M')                                         //if true, calculates meters to miles
   {
   cout << "    " << mile << "  in miles.\n";
   }

   else if (unit == 'k' || unit == 'K')                                         //if true, calculates meters to kilometers
   {
   cout << "    " << kilometer << " in kilometers.\n";
   }

   else if (unit == 'n' || unit == 'N')                                         //if true, calculates meters to nautical miles
   {
   cout << "    " << nautical << "  in nautical miles.\n";
   }

   else if (unit == 'l' || unit == 'L')                                         //if true, calculates meters to leagues
   {
   cout << "    " << league << "    in leagues.\n";
   }

   else if (unit == 'r' || unit == 'R')                                         //if true, calculates meters to rods
   {
   cout << "    " << rod << "   in rods.\n";
   }

   else if (unit == 'b' || unit == 'B')                                         //if true, calculates meters to biblical cubits
   {
   cout << "    " << cubit << " in biblical cubits.\n";
   }

   else if (unit == 's' || unit == 'S')                                         //if true, calculates meters to biblical spans
   {
   cout << "    " << span << "  in biblical spans.\n";
   }

   else                                                                         //if none of the previous are true, displays an error message
   {
   cout << unit << " is an invalid input code.";
   }

   system("PAUSE");                                                             //Causes the program to pause
   return 0;

}  // end main














