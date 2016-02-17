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
*   convertMeters() - the function that executes
*****************************************/
void convertMeters()
{
   /*******************************
   *     local variables
   ******************************/

   float numMeter;
   float numInch;
   float numFeet;
   float numYard;
   float numMile;

   cout << "This program converts meters into other units of measurement.\n";
   cout << "What is the number of meters?";
   cin >> numMeter;

   ///Calculations:
   numInch = numMeter * 0.0254;
   numFeet = numMeter * 0.3048;
   numYard = numMeter * 0.9144;
   numMile = numMeter * 1609.34;

   cout << "\n\n    " << numMeter << " meters is:\n";
   cout << "        " << numInch << " inches\n";
   cout << "        " << numFeet << " feet\n";
   cout << "        " << numYard << " yards\n";
   cout << "        " << numMile << " miles\n";


system("PAUSE");                                                             //Causes the program to pause

}

int main()
{
    convertMeters();
    return 0;
}















