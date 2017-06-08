/********************************************************
*  Name:           Struct01
*  Author:         Grant Fisher
*  Date due:       2/3/14
*  Description:    Creates a Struct for a star fleet member.
*                  Uses pointers to take in and display data.
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

/************************************
*     defines
*************************************/
//#define  PI  3.14159
/************************************
*      global variables
*************************************/
struct starTrekPersonel     //Create a struct with the following data items:
{
       string ID;          //a.	String	ID
       string name;        //b.	String 	name
       string address;     //c.	String	address
       string city;        //d.	String	city
       string state;       //e.	String	state
       string zip;         //f.	String	zip
       string planet;      //g.	String	planet
};
int main()
{
    /*1.	declare a StarTrekPersonel struct named stpSample
     *2.	create (instantiate) the variable */

     starTrekPersonel stpSample;
     starTrekPersonel* stpPX = new  starTrekPersonel;

     stpPX->planet = "Mars";
     cout << stpPX->planet << endl;

     (*stpPX).name = "James T. Kirk";
     cout << (*stpPX).name << endl;

     cout << stp.name << endl;
    //3.	using cin and cout to load in the values to the ID
     cout << "\n Enter the ID : ";
     cin.ignore();     //to skip the remaining '\n' character
     getline (cin, stpPX->ID);
     cin >> stpPX->ID;

    //3.	using cin and cout to load in the values to the name
     cout << "Enter the name : ";
     cin.ignore();     //to skip the remaining '\n' character
     getline(cin, stpPX->name);

    //3.	using cin and cout to load in the values to the address
     cout << "Enter the address : ";
     getline(cin, stpPX->address);

   //3.	using cin and cout to load in the values to the city
     cout << "Enter the city : ";
     cin >> stpPX->city;
     cin.ignore();     //to skip the remaining '\n' character
     getline(cin, stpPX->city);

    //3.	using cin and cout to load in the values to the state
     cout << "Enter the state : ";
     cin >> stpPX->state;

    //3.	using cin and cout to load in the values to the zip
      cout << "Enter the zip : ";
      cin >> stpPX->zip;

    //3.	using cin and cout to load in the values to the planet
      cout << "Enter the planet : ";
      cin >> stpPX->planet;


    //4.	using cout output your stpSample
     cout << "\n \n *** *  \"the strSample field\" **** " << endl;
     cout << "     ID      " << stpPX->ID << endl;
     cout << "     name    " << stpPX->name << endl;
     cout << "     address " << stpPX->address << endl;
     cout << "     city    " << stpPX->city << endl;
     cout << "     state   " << stpPX->state << endl;
     cout << "     zip    " << stpPX->zip << endl;
     cout << "     planet  " << stpPX->planet << endl;
     system("pause");
     return 0;
}
