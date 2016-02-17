/**************************************************
*
*      program name:       PassPointers02
*      Author:             Grant Fisher
*      date due:           11-26-13
*      remarks:            Converts meters into other various units
*                          of measurements using pointers
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

void convertMeters(int, float*, float*, float*, float*);

/****************************************
*                Main
****************************************/
int main()
{
    int numMeters;
    float* pInches;
    float* pFeet;
    float* pYards;
    float* pMiles;

    cout << "What is the number of meters? ";
    cin >> numMeters;

    convertMeters(numMeters, pInches, pFeet, pYards, pMiles);
    cout << numMeters << " meters is:";
    cout << "   " << *pInches << " inches";
    cout << "   " << *pFeet << " feet";
    cout << "   " << *pYards << " yards";
    cout << "   " << *pMiles << " miles";


    return 0;
}

/****************************************
*                Functions
****************************************/
void convertMeters(int, float*, float*, float*, float*)
{
    int numMeters;
    float* pInches;
    float* pFeet;
    float* pYards;
    float* pMiles;
    float iInches;
    float iFeet;
    float iYards;
    float iMiles;

    *pInches = iInches;
    *pFeet = iFeet;
    *pYards = iYards;
    *pMiles = iMiles;

    iInches = .0254*numMeters;
    iFeet = .3048*numMeters;
    iYards = .9144*numMeters;
    iMiles = 1609.34*numMeters;


}









