/**************************************************
*
*      program name:       Date04
*      Author:             Grant Fisher
*      date due:           2/12/14
*      remarks:            A basic program with a class
*                          that details specific date
*                          inputs.
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstring>
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
        int* month;              // holds month
        int* day;                // holds day
        int* year;               // holds year
    public:
        /*** constructors [on] ***/
        Date();
        //*Date(int m, int d, int y);
        /****************************/

        // setters
        void setMonth(int x)    {*month = x;}
        void setDay(int x)      {*day = x;}
        void setYear(int x)     {*year = x;}

        // getters
        int getMonth()          {return *month;}
        int getDay()            {return *day;}
        int getYear()           {return *year;}

        bool calcLeapYear();    // determines leap year
        int calcDayOfYear();    // determines the julian day
        char* getDayOfWeek();   // determines the day of week
        string getMonthName();  //

        void display();         // displays information

};
/****************************************
*         member functions
****************************************/

/*** constructors [on] *****************/
Date::Date()
{
    month = new int(1);
    day = new int(1);
    year = new int(1900);
}

/****
Date::Date(int m, int d, int y)
{
    cout << "**** in constructor with 3 ints ****\n";
    setMonth(m);
    setDay(d);
    setYear(y);
}
******************************************/


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
    else if((getYear()%4) == 0)
    {
        isLeapYear = 1;
    }
    else
    {
        isLeapYear = 0;
    }

    return isLeapYear;
};

//Uses the month, day, and year to calculate the julian day
int Date :: calcDayOfYear()
{
    int julian;   // Variable for Julian Date
    int numDays[14] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    julian = numDays[getMonth()] + getDay();

    if(calcLeapYear() && getMonth()>2)
    {
        julian++;
    }

    else
    {
    }

    return julian;
}

char* Date :: getDayOfWeek()
{
    //  Finds the total number of days after 1/1/1900
    int totDays = 0;
    for (int x = 1900; x < getYear(); x++)
    {
        totDays += 365;
        if(calcLeapYear())
        {
            totDays ++;
        }
    }
    totDays = totDays + calcDayOfYear();

    //  Takes that number and uses it to calculate the day
    char dayOfWeek[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int dayCalc;

    dayCalc = totDays % 7;

    char* ptrDayOfWeek;
    ptrDayOfWeek = &dayOfWeek[dayCalc][0];
    return ptrDayOfWeek;
}

// calculates the name of the month number entered
string Date :: getMonthName()
{
    string month1 [13][10] = {
                             {"YaGoofed"},
                             {"January"},
                             {"February"},
                             {"March"},
                             {"April"},
                             {"May"},
                             {"June"},
                             {"July"},
                             {"August"},
                             {"September"},
                             {"October"},
                             {"Novermer"},
                             {"December"}
                            };
    return month1[getMonth()][0];

}


void Date::display()
{
    ///Displays the date and wether or not
    ///The date is a leap year
    ///As well as the julian Date
    char dayName[11];
    strcpy(dayName, getDayOfWeek());

    cout << "\n\n";
    cout << "Month is       " << getMonth() << "\n";
    cout << "Day is         " << getDay() << "\n";
    cout << "Year is        " << getYear() << "\n";
    cout << "Day of year is " << calcDayOfYear() << "\n";

    if(calcLeapYear() ==  true)
    {
        cout << getYear() << " is a leap year\n";
    }

    else
    {
        cout << getYear() << " is not a leap year\n";
    }
    cout << "Month          " << getMonthName() << "\n";
    cout << "Day-of-week is " << dayName << "\n";
}

/****************************************
*          function prototypes
****************************************/
void testDate01();
void testDate02();
void testDate03();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    //testDate01();
    //testDate02();
    testDate03();

    system("PAUSE");// causes the program to pause
	return 0;
}  // end main

void testDate01()
{
    Date today;     // Define an instance of the 'Date' class

    int loMonth;    // Local variable for month
    int loDay;      // Local variable for day
    int loYear;     // Local variable for year

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

    today.display(); //output

    /*** Test the getters *****
    cout << "\n\nThe following lines are the test for the getters:\n";
    cout << today.getMonth() << "\n";
    cout << today.getDay()   << "\n";
    cout << today.getYear()  << "\n\n\n";
    ***************************/

    /***Tests the calcLeapYear member function
    cout << "The following blocks are tests for the calcLeapYear member function:";
    today.setYear(1900);
    today.display();
    today.setYear(2000);
    today.display();
    today.setYear(1999);
    today.display();
    today.setYear(1996);
    today.display();
    ***************************/
}
/*** Constructor [off] ******
/// tests the constructors
void testDate02()
{
     Date d1;
     d1.display();
     Date d2(5, 15, 1992);
     d2.display();
}
*******************************/

void testDate03()
{
    cout << "The following outputs are tests for the constructor";
    Date d3;

    //Tests the calcDayOfYear() function
    d3.setMonth(1);
    d3.setDay(1);
    d3.setYear(1999);
    d3.display();
    d3.setYear(2000);
    d3.display();
    d3.setMonth(12);
    d3.setDay(31);
    d3.display();
    d3.setYear(1999);
    d3.display();
    d3.setMonth(2);
    d3.setDay(28);
    d3.display();
    //d3.setYear(2000);
    //d3.display();
    //d3.setDay(29);
    //d3.display();
    //d3.setMonth(3);
    //d3.setDay(1);
    //d3.display();
    //d3.setYear(1999);
    //d3.display();
}
