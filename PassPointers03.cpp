/**************************************************
*
*      program name:       PassPointers02
*      Author:             Grant Fisher
*      date due:           11-26-13
*      remarks:            Converts meters into other various units
*                          of measurements using pointers
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

void convertTime(int, int*, int*, int*);

/****************************************
*                Main
****************************************/
int main()
{
    int inSeconds;
    int* pHours;
    int* pMinutes;
    int* pSeconds;

    cout << "What is the number of seconds? ";
    cin >> inSeconds;
    cout << "\n" << inSeconds << " seconds\nConverts to:\n";
    convertTime(inSeconds, pHours, pMinutes, pSeconds);

    cout << *pHours << "\n";
    cout << *pMinutes << "\n";
    cout << *pSeconds;

    return 0;
}

/****************************************
*                Functions
****************************************/

void convertTime(int inSeconds, int*, int*, int*)
{
    int afterHours;
    int oHours;
    int oMinutes;
    int oSeconds;
    int* pHours;
    int* pMinutes;
    int* pSeconds;

    oHours = (inSeconds/3600);      ///Calculates the number of hours
    afterHours = (inSeconds - (oHours*3600)); ///Subtracts those hours from the total number of seconds
    oMinutes = (afterHours/60);     ///Calculates the number of minutes
    oSeconds = (inSeconds - ((oMinutes*60)+(oHours*3600))); ///Subtracts the hours and minutes from the total number of seconds

    cout << oHours << " hours\n";
    cout << oMinutes << " minutes\n";
    cout << oSeconds << " seconds";

    pHours = &oHours;
    pMinutes = &oMinutes;
    pSeconds = &oSeconds;




}
