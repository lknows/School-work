/**************************************************
*
*      program name:       Date01
*      Author:             Grant Fisher
*      date due:           2/5/14
*      remarks:            A basic program with a class
*                          that determines wether or not
*                          a particular date is a leap year.
***************************************************/

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
*         Class definitions
****************************************/
class Date
{
    private:
        int month;              // holds month
        int day;                // holds day
        int year;               // holds year
    public:
        // setters
        void setMonth(int x)    {month = x;}
        void setDay(int x)      {day = x;}
        void setYear(int x)     {year = x;}

        // getters
        int getMonth()          {return month;}
        int getDay()            {return day;}
        int getYear()           {return year;}

        bool calcLeapYear();

        void display();
};
/****************************************
*         member functions
****************************************/
        // Determines if the year is a leap year
        bool Date :: calcLeapYear()
        {
            int isLeapYear;

            if((getYear()%400) == 0)
            {
                isLeapYear = 1;
            }
            else if((getYear()%100) == 0)
            {
                isLeapYear = 0;
            }
            else if((year%4) == 0)
            {
                isLeapYear = 1;
            }
            else
            {
                isLeapYear = 0;
            }

            return isLeapYear;
        };



void Date::display()
{
    ///Displays the date and wether or not
    ///The date is a leap year

    cout << "\n\n";
    cout << "Month is   " << month << "\n";
    cout << "Day is     " << day << "\n";
    cout << "Year is    " << year << "\n";
    if(calcLeapYear() ==  true)
    {
        cout << getYear() << " is a leap year\n";
    }

    else
    {
        cout << getYear() << " is not a leap year\n";
    }
}
/****************************************
*          function prototypes
****************************************/
void testDate01();
void testDate02();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    testDate01();


    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main

void testDate01()
{
    Date today;     // Define an instance of the 'Date' class

    int loMonth;    //Local variable for month
    int loDay;      //Local variable for day
    int loYear;     //Local variable for year

    //Take in values for the local variables
    cout << "Please enter the month: ";
    cin >> loMonth;
    cout << "Please enter the day: ";
    cin >> loDay;
    cout << "Please enter the year: ";
    cin >> loYear;

    //store the date in the 'today' object
    today.setMonth(loMonth);
    today.setDay(loDay);
    today.setYear(loYear);
    today.display();

    //Test the getters
    cout << "\n\nThe following lines are the test for the getters:\n";
    cout << today.getMonth() << "\n";
    cout << today.getDay()   << "\n";
    cout << today.getYear()  << "\n\n\n";

    //Tests the calcLeapYear member function
    cout << "The following blocks are tests for the calcLeapYear member function:";
    today.setYear(1900);
    today.display();
    today.setYear(2000);
    today.display();
    today.setYear(1999);
    today.display();
    today.setYear(1996);
    today.display();
}
