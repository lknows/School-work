/**************************************************
*
*      program name:       Meters2stuff03
*      Author:             Grant Fisher
*      date due:           10-17-13
*      remarks:            This program converts meters to
*                          Other various units of measurement.
*                          (Switch)
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

   cout << m << "   in meters is ";

   switch(unit)                                                                 //Displays the converted measurement
   {
       case 'y':
       case 'Y': cout << "    " << yard << "  in yards.\n";
       break;

       case 'f':
       case 'F': cout << "    " << feet << "  in feet.\n";
       break;

       case 'm':
       case 'M': cout << "    " << mile << "  in miles.\n";
       break;

       case 'k':
       case 'K': cout << "    " << kilometer << " in kilometers.\n";
       break;

       case 'n':
       case 'N': cout << "    " << nautical << "  in nautical miles.\n";
       break;

       case 'l':
       case 'L': cout << "    " << league << "    in leagues.\n";
       break;

       case 'r':
       case 'R': cout << "    " << rod << "   in rods.\n";
       break;

       case 'b':
       case 'B': cout << "    " << cubit << " in biblical cubits.\n";
       break;

       case 's':
       case 'S': cout << "    " << span << "  in biblical spans.\n";
       break;

       default:  cout << unit << " is an invalid input code.\n";
   }

   system("PAUSE");                                                             //Causes the program to pause
   return 0;

}  // end main














