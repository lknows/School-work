/**************************************************
*
*      program name:       F03ConvertTime
*      Author:             Grant Fisher
*      date due:           11-6-13
*      remarks:            This program converts hours, minutes and
*                          seconds into a total number of seconds.
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

void arithmeticX(int, int, int*, int*, int*, double*);

/****************************************
*                Main
****************************************/

void arithmeticX(int, int, int*, int*, int*, double*)
{
    int inNum1;
    int inNum2;
    int* pSum;
    int* pProduct;
    int* pDifference;
    double* pQuotient;

    *pSum = inNum1 + inNum2;
    *pProduct = inNum1 * inNum2;
    *pDifference = inNum1 - inNum2;
    *pQuotient = inNum1 / inNum2;

}





int main()
{
    int inNum1;
    int inNum2;
    int iSum;
    int iProduct;
    int iDifference;
    double iQuotient;
    int* pSum;
    int* pProduct;
    int* pDifference;
    double* pQuotient;

    pSum = &iSum;
    pProduct = &iProduct;
    pDifference = &iDifference;
    pQuotient = &iQuotient;

    cout << "First integer: ";
    cin >> inNum1;
    cout << "Second integer: ";
    cin >> inNum2;
    cout << "\n\nNumbers input: " << inNum1 << " & " << inNum2;

    iSum = inNum1 + inNum2;
    iProduct = inNum1 * inNum2;
    iDifference = inNum1 - inNum2;
    iQuotient = inNum1 / inNum2;

    cout << "\n\n     ***using the variables***";
    cout << "\n     Sum:        " << iSum;
    cout << "\n     Difference: " << iDifference;
    cout << "\n     Product:    " << iProduct;
    cout << "\n     Quotient:   " << iQuotient;

    arithmeticX(inNum1, inNum2, pSum, pDifference, pProduct, pQuotient);
    cout << "\n\n     ***using the pointers ***";
    cout << "\n     Sum:        " << *pSum;
    cout << "\n     Difference: " << *pDifference;
    cout << "\n     Product:    " << *pProduct;
    cout << "\n     Quotient:   " << *pQuotient;

    return 0;
}












