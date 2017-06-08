/******************************************************************************
*
*      program name:   FuncCallingFunc
*      Author:         Grant Fisher
*      remarks:        Prompts User to enter radius and height.
*					       Runs through 5 functions.
*					       Then the functions return data to main and displays.
*
******************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <iomanip>
#include <cmath>
#include <cstdlib>

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
float areaCircle(float radiusIn);
float circumCircle(float radiusIn);
float areaSphere(float radiusIn);
float circumSphere(float radiusIn);
float volumeSphere(float radiusIn);
float areaCylinder(float radiusIn, float heightIn);
float volumeCylinder(float radiusIn, float heightIn);
float volumeCone(float radiusIn, float heightIn);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/

	float radiusIn;           //variable input for radius
	float heightIn;           //variable input for height
	float area;
	float circum;
	float volume;



	//Questions
	cout << "enter the radius of the\n";
    cout << "       circle, cone, sphere, or cylinder: ";
	cin  >> radiusIn;
	cout << "enter the height of the cylinder or cone: ";
	cin  >> heightIn;


    /**********************
	* Functions & Display *
	***********************/
	cout << setprecision (2) << fixed    << "\n";
	cout << "radius is "     << radiusIn << "\n";
	cout << "height is "     << heightIn << "\n\n\n";

	area   = areaCircle(radiusIn);
	cout  << "area of the circle is          " << setw(5) << area   << "\n";

	circum = circumCircle(radiusIn);
	cout  << "circumference of the circle is " << setw(5) << circum << "\n\n";

	area   = areaSphere(radiusIn);
	cout  << "area of the sphere is          " << setw(5) << area   << "\n";

	circum = circumSphere(radiusIn);
	cout  << "circumference of the sphers is " << setw(5) << circum << "\n";

	volume = volumeSphere(radiusIn);
	cout  << "volume of the sphere is        " << setw(5) << volume << "\n\n";

	area   = areaCylinder(radiusIn, heightIn);
	cout  << "area of the cylinder is        " << setw(5) << area   << "\n";

	volume = volumeCylinder(radiusIn, heightIn);
	cout  << "volume of the cylinder is      " << setw(5) << volume << "\n\n";

	volume = volumeCone(radiusIn, heightIn);
	cout  << "volume of the cone is          " << setw(5) << volume << "\n\n";


	system("pause");
	return 0;
}


/*******************************************
*  given radius, calculate circle's area
*******************************************/
float areaCircle(float radiusIn)
{
   float area;
   area = PI * (radiusIn * radiusIn);
   return area;
}

/**************************************************
*  given radius, calculate circle's circumference
**************************************************/
float circumCircle(float radiusIn)
{
   float circum;
   circum = PI * radiusIn * 2;
   return circum;
}

/*******************************************
*  given radius, calculate sphere's area
*******************************************/
float areaSphere(float radiusIn)
{
   float area;
   area = 4 * areaCircle(radiusIn); ///Reduced
   return area;
}

/**************************************************
*  given radius, calculate sphere's circumference
**************************************************/
float circumSphere(float radiusIn)
{
   float circum;
   circum = circumCircle(radiusIn); ///Reduced
   return circum;
}

/**********************************
*  given radius and height,
*  calculate sphere's volume
**********************************/
float volumeSphere(float radiusIn)
{
   float volume;
   volume = 4.0 / 3.0 * (areaCircle(radiusIn) * radiusIn); ///Reduced
   return volume;
}

/********************************************
*  given radius and height,
*  calculate cylinder's surface area
********************************************/
float areaCylinder(float radiusIn, float heightIn)
{
   float area;
   area = ((2 * areaCircle(radiusIn))) + ((heightIn * circumCircle(radiusIn))); ///Reduced
   return area;
}

/**********************************
*  given radius and height,
*  calculate cylinder's volume
**********************************/
float volumeCylinder(float radiusIn, float heightIn)
{
   float volume;
   volume = areaCircle(radiusIn) * heightIn; ///Reduced
   return volume;
}

/**********************************
*  given radius and height,
*  calculate a cone's volume
**********************************/
float volumeCone(float radiusIn, float heightIn)
{
   float volume;
   volume = ((volumeCylinder(radiusIn, heightIn))) * ((.3333333333)); ///Reduced
   return volume;
}






























