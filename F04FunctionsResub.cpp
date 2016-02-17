/**************************************************
*
*      program name:       F04Functions
*      Author:             Grant Fisher
*      date due:           10-29-13
*      remarks:            This program reads in the radius and height
*                          to calculate the area and volume.
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
*          functions
****************************************/

///calculates the area of the circle
float areaCircle(float radius)
{
    float areaCircle = (radius) * (radius);
}

///calculates the circumference of the circle
float circumCircle(float radius)
{
    float circumCircle = PI * radius * 2;
}

///calculates the area of the cylinder
float areaCylinder(float radius, float height)
{
    float areaCylinder = (2 * PI * radius * radius) + (height * PI * radius * 2);
}

///calculates the volume of the cylinder
float volumeCylinder(float radius, float height)
{
    float volumeCylinder = PI * radius * radius * height;
}

///calculates the volume of the cone
float volumeCone(float radius, float height)
{
    float volumeCone = (1/3) * (PI * radius * radius * height);
}

int main()
{
    float radius;       //Holds the value of the radius
    float height;       //Holds the value of the height

    cout << "what is the radius? ";
    cin >> radius;
    cout << "what is the height? ";
    cin >> height;

    cout << "radius is " << radius;
    cout << "\nheight is " << height;
    cout << "\n\n";

    cout << "area of the circle is " << areaCircle(radius);
    cout << "\ncircumference of the circle is " << circumCircle(radius);
    cout << "\narea of the cylinder is " << areaCylinder(radius,height);
    cout << "\nvolume of the cylinder is " << volumeCylinder(radius,height);
    cout << "\nvolume of the cone is " << volumeCone(radius,height);



    return 0;
}















