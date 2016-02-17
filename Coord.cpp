/**************************************************
*
*      program name:       PassPointers01
*      Author:             Grant Fisher
*      date due:           02/5/14
*      remarks:
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
#define PI 3.14159
using namespace std;


/****************************************
*          function prototypes
****************************************/
void arithmetic(int, int, float*, float*);

void arithmetic(int inHeight, int inRadius, float* pArea, float* pVolume)
{
    float area;
    float volume;
    pArea = &area;
    pVolume = &volume;
    area = (2*3.14*inRadius*inRadius) + (inHeight) + (2*3.14*inRadius);
    volume = (3.14*inRadius*inRadius*inHeight);
    cout << "\n\n";
    cout << "   ***From function***\n";
    cout << "   area:      " << *pArea << "\n";
    cout << "   volume:    " << *pVolume << "\n\n";
}


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    int inHeight;   // Variable for the height of a cylinder
    int inRadius;   // Variable for the Radius of a cylinder
    float *pArea;   // Pointer for Area
    float *pVolume; // Pointer for Volume

    //Requests the dimensions of a cylinder
    cout << "What is the Height of the cylinder? ";
    cin >> inHeight;
    cout << "What is the Radius of the cylider? ";
    cin >> inRadius;

    //Performs the necessary calculations
    arithmetic(inHeight, inRadius, pArea, pVolume);

    //Displays the caclulations
    cout << "\n\n";
    cout << "   ***Using the Pointers***\n";
    cout << "   Area:       " << *pArea << "\n";
    cout << "   Volume:     " << *pVolume << "\n";



    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main
















