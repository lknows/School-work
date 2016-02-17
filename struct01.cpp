/********************************************************
*  Name:           struct01
*  Author:         Grant Fisher
*  Date due:       01/27/14 10:32
*  Description:    creates a struct whose members
*                  hold personal information for a
*                  star fleet recruit
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cstdlib>
using namespace std;

/************************************
*     defines
*************************************/
#define  PI  3.14159

/*************************************
*     function prototype
*************************************/


/************************************
*      global variables
*************************************/
struct StarTrekPersonel ///Declares the struct
{
    string id;          // Identification Number
    string name;        // Profile's name
    string address;     // Profile's address
    string city;        // Profile's city
    string state;       // Profile's State
    string zip;         // Profile's zip code
    string planet;      // Profile's home planet
};



int main()
{
    /************************************
    *      local variables
    *************************************/
    StarTrekPersonel stpSample;     ///instantiates the variable name

    ///obtains the ID number
    cout << "Enter the ID number(no spaces): ";
    cin >> stpSample.id;

    ///obtains the name
    cout << "Enter the name(no spaces): ";
    cin >> stpSample.name;

    ///obtains the address
    cout << "Enter the address(no spaces): ";
    cin >> stpSample.address;

    ///obtains the city
    cout << "Enter the city(no spaces): ";
    cin >> stpSample.city;

    ///obtains the state
    cout << "Enter the state(no spaces): ";
    cin >> stpSample.state;

    ///obtains the zip code
    cout << "Enter the zip code(no spaces): ";
    cin >> stpSample.zip;

    ///obtains the home planet
    cout << "Enter the home planet(no spaces): ";
    cin >> stpSample.planet;

    ///Displays the information stored in stpSample variable
    cout << "\n\n   **** \"the strSample field\" ****";
    cout << "\n     ID          " << stpSample.id;
    cout << "\n     address     " << stpSample.address;
    cout << "\n     city        " << stpSample.city;
    cout << "\n     state       " << stpSample.state;
    cout << "\n     zip code    " << stpSample.zip;
    cout << "\n     planet      " << stpSample.planet;
    cout << "\n";



    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
void noArgsNoRet()
{
    /************************************
    *      local variables
    *************************************/
}
