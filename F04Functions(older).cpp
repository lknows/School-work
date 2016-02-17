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
*          function prototypes
****************************************/

///
float areaCircle(float radius)
{
    float areaCircle;
    areaCircle = (radius * radius);
}

float circumCircle(float radius)
{
    float circumCircle;
    circumCircle = PI * radius * 2;
}

float areaCylinder(float radius, float height)
{
    float areaCylinder;
    areaCylinder = (2 * PI * radius * radius) + (height * PI * radius * 2);
}

float volumeCylinder(float radius, float height)
{
    float volumeCylinder;
    volumeCylinder = PI * radius * radius * height;
}

float volumeCone(float radius, float height)
{
    float volumeCone;
    volumeCone = (1/3) * (PI * radius * radius * height);
}
///
int main()
{
    float radius;
    float height;

    cout << "what is the radius? ";
    cin >> radius;
    cout << "what is the height? ";
    cin >> height;

    cout << "radius is " << radius;
    cout << "\nheight is " << height;
    cout << "\n\n";

    areaCircle(radius);
    circumCircle(radius);
    areaCylinder(radius, height);
    volumeCylinder(radius, height);
    volumeCone(radius, height);

    cout << "area of the circle is " << areaCircle;
    cout << "\ncircumference of the circle is " << circumCircle;
    cout << "\narea of the cylinder is " << areaCylinder;
    cout << "\nvolume of the cylinder is " << volumeCylinder;
    cout << "\nvolume of the cone is " << volumeCone;



    return 0;
}















