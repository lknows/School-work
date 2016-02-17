/********************************************************
*  Name:           elemental
*  Author:         Grant Fisher
*  Description:    Silly game I started in making in class
*                  because I got super effing bored...
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
*       Class Definitions
**************************************/
class Monster
{
    private:
        int water;
        int earth;
        int fire;
    public:
        //Default Constructor
        Monster();

        //Other Constructor
        Monster(int y, int z);

        //Setters
        void setWater(int w)                {water = w;}
        void setEarth(int e)                {earth = e;}
        void setFire(int  f)                {fire  = f;}

        //getters
        int getWater()                      {return water;}
        int getEarth()                      {return earth;}
        int getFire( )                      {return fire ;}

        //member functions
        void statBoost();
        void display();
};


/*************************************
*       Member Functions
*************************************/
Monster :: Monster()
{

}

Monster :: Monster(int y, int z)
{

}

void Monster :: statBoost()
{
    water++;
    earth++;
    fire++;
    cout << "\nCongrats, your monster gained experience in it's";
    cout << "\nElemental fields\n";
    cout << "\nSledeko's new stats:\n";
    cout << "Water + 1!\nEarth + 1!\nFire +1!\nHere are his new stats:\n";
    cout << "____________________";
    cout << "\n Water:  " << getWater();
    cout << "   Earth:  " << getEarth();
    cout << "   Fire:   " << getFire() << "\n\n";
}

void Monster :: display()
{
    char eater;     //

    cout << "\n\nYour monster's stats are as follows:";
    cout << "\n____________________________________";
    cout << "\n Water:  " << getWater();
    cout << "   Earth:  " << getEarth();
    cout << "   Fire:   " << getFire( );
    cout << "\n\nWould you like to use a sparce soda? (choose wisely)";
    cout << "y = yes        n = no\n";
    cin  >> eater;
    if (eater == 'n')
    {
        cout << "\nGame Over. Use sparce soda next time.";
    }

    else if (eater == 'y')
    {
        statBoost();
    }

    else
    {
        cout << "\ninvalid entry!";
    }
}

/*************************************
*     function prototype
*************************************/

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
     int loW;
     int loE;
     int loF;

     // function call
     Monster *monPtr;
     Monster Sledeko;
     monPtr = &Sledeko;

     cout << "Your monster's name is Sledeko!\n\n";

     Sledeko.setWater(10);

     cout << "Enter his earth stat: ";
     cin >> loE;

     Sledeko.setEarth(loE);

     cout << "Enter his fire stat:  ";
     cin >> loF;

     Sledeko.setFire(loF);

     monPtr->display();
     Sledeko.display();
     Sledeko.display();

     return 0;
}

/************************************
*      non-member functions
*************************************/
