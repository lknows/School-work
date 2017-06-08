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
        int month;
        int day;
        int year;
    public:
        // setters
        void setMonth(int x)    {month = x;}
        void setDay(int x)      {day = x;}
        void setYear(int x)     {year = x;}

        // getters
        int getMonth()          {return month;}
        int getDay()            {return day;}
        int getYear()           {return year;}

        // Determines if the year is a leap year
        bool calcLeapYear()
        {
            if(((year%4) == 0) && (((year%100)!=0)))
            {
                true;
            }
            else if((year%400) == 0)
            {
                true;
            }
            else
            {
                false;
            }
        };

        void display();
};
/****************************************
*         member functions
****************************************/
void Date::display()
{
    ///Displays the date and wether or not
    ///The date is a leap year
    int x;
    cout << "\n\n";
    cout << "Month is   " << month << "\n";
    cout << "Day is     " << day << "\n";
    cout << "Year is    " << year << "\n";
    calcLeapYear();
    if(calcLeapYear() ==  true)
    {
        cout << year << " is a leap year\n";
    }

    else
    {
        cout << year << " is not a leap year\n";
    }
}
/****************************************
*          function prototypes
****************************************/
void display();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    Date today;     // Define an instance of the 'Date' class

    //Declare local variables for date
    int loMonth;
    int loDay;
    int loYear;

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


    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main

















