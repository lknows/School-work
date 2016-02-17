/**************************************************
*
*      program name:       F03ConvertTime
*      Author:             Grant Fisher
*      date due:           11-6-13
*      remarks:            This program converts hours, minutes and
*                          seconds into a total number of seconds.
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
/******************************************
*
*****************************************/

/// This function calculates the number of total seconds.
/// **But does not print the calculation.**
int convertTime(int hours, int minutes, int seconds)
{
    int convertTime = (hours * 3600) + (minutes * 60) + (seconds);
}

/// This function Requests the hours, minutes, and seconds.
/// Then it calls upon the previous function to calculate the total.
/// Lastly it prints out the previous function's calculation.
int main()
{
    int hours;          // Holds the value of hours
    int minutes;        // Holds the value of minutes
    int seconds;        // Holds the value of seconds

    cout << "What are the number of hours? ";
    cin >> hours;
    cout << "What are the number of minutes? ";
    cin >> minutes;
    cout << "What are the number of seconds? ";
    cin >> seconds;

    cout << hours << " hours\n";
    cout << minutes << " minutes\n";
    cout << seconds << " seconds\nConverts to a total of\n";

    ///Prints out the calculation from the previous function
    cout << convertTime(hours,minutes,seconds) << " seconds.";

    return 0;
}















