/**************************************************
*
*      program name:       F03ConvertTime
*      Author:             Grant Fisher
*      date due:           10-29-13
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


/****************************************
*          function prototypes
****************************************/

/// This function calculates and displays the number of total seconds.
void convertTime(int hours, int minutes, int seconds)
{
    int totalSeconds;
    totalSeconds = (hours * 3600) + (minutes * 60) + (seconds);



    cout << hours << " hours\n";
    cout << minutes << " minutes\n";
    cout << seconds << " seconds\nConverts to a total of\n";
    cout << totalSeconds << " seconds\n";

}

/// This function Requests the hours, minutes, and seconds.
/// Then it calls upon the previous function to calculate
/// the total number of seconds.
int main()
{
    int hours;
    int minutes;
    int seconds;

    cout << "What are the number of hours? ";
    cin >> hours;
    cout << "What are the number of minutes? ";
    cin >> minutes;
    cout << "What are the number of seconds? ";
    cin >> seconds;

    convertTime(hours,minutes,seconds);


    return 0;
}















