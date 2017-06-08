/**************************************************
*
*      program name:       Coord-graph
*      Author:             Grant Fisher
*      date due:
*      remarks:            Skeleton C code
*                          Start with this format
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
#define PI 3.14159
using namespace std;
/****************************************
*         Class definitions
****************************************/
class Coord
{
    private:
        int* xCoord;
        int* yCoord;
        int* zCoord;
    public:
        // constructors
        Coord(int x, int y, int z);
        Coord();
        // copy constructor
        Coord(const Coord &cx);
        // destructor
        ~Coord();


        // setters
        void setXCoord(int x)     {*xCoord = x;}
        void setYCoord(int y)     {*yCoord = y;}
        void setZCoord(int x)     {*zCoord = x;}

        // getters
        int  getXCoord()const     {return *xCoord;}
        int  getYCoord()const     {return *yCoord;}
        int  getZCoord()const     {return *zCoord;}

        void display();
};

/****************************************
*         member functions
****************************************/
// constructors
Coord :: Coord()
{
     cout << "in default constructor\n";
     xCoord = new int(0);
     yCoord = new int(0);
     zCoord = new int(0);
}
Coord :: Coord(int x, int y, int z)
{
     cout << "in constructor with 3 ints\n";
     xCoord = new int;
     setXCoord(x);

     yCoord = new int;
     setYCoord(y);

     zCoord = new int;
     setZCoord(z);
}
// copy constructor
Coord :: Coord(const Coord &cx)
{
     cout << "in copy constructor\n";
     xCoord = new int;
     setXCoord(cx.getXCoord());

     yCoord = new int(cx.getYCoord());

     zCoord = new int;
     setZCoord(cx.getZCoord());
}
// destructor
Coord :: ~Coord()
{
     cout << "in destructor\n";
     delete xCoord;
     delete yCoord;
     delete zCoord;
}

void Coord :: display()
{
     cout << "\n";
     cout << "*** co-ordinate object ***\n";
     cout << "xCoord    " << getXCoord() << endl;
     cout << "yCoord    " << getYCoord() << endl;
     cout << "zCoord    " << getZCoord() << endl;
     cout << "\n";
}

/****************************************
*          function prototypes
****************************************/
void testDestructor();
void testTestPass2Func();
void testPass2Func(Coord c2);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/

    Coord c1;
    Coord c2(1, 2, 3);

    c1.display();
    c2.display();

    testDestructor();
    cout << "after destructor test\n\n\n";

    testTestPass2Func();

    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main
void testDestructor()
{
     cout << "in test destructor\n";
     Coord xx(4, 4, 4);
}
void testTestPass2Func()
{
     cout << "in testTestPass2Func()\n";
     Coord c1;
     testPass2Func(c1);
}
void testPass2Func(Coord c2)
{
     cout << "in testPass2Func(Coord c2)\n";
}































