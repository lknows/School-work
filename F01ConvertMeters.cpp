/**************************************************
*
*      program name:       F02ConvertDaysWeeks
*      Author:             Grant Fisher
*      date due:           10-29-13
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
*   giveWeeks(int days) - a function that executes
*****************************************/
void giveWeeks(int days)
{
    int weeks;
    weeks = days/7;
    cout << days << " days has " << weeks << " full weeks\n";
}

void giveDays(int days)
{
    int daysLeft;
    daysLeft = days%7;
    cout << days << " days has " << daysLeft << " days left over\n";
system("PAUSE");
}

int main()
{
    int days;

    cout << "What are the number of Days?";
    cin >> days;
    cout << "\n";

    giveWeeks(days);
    giveDays(days);


    return 0;
}















