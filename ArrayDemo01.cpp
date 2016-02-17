/*************************************************************************
*
*      program name:       ArrayDemo
*      Author:             Grant Fisher
*      remarks:            Messing around with arrays
*
*************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>
/*************************
*     pre-processor
*************************/
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
void testArray01();
void testArray02();
void testArray03();
void testArray04();
void testArray05();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/

    //testArray01();
    testArray02();
    //testArray03();
    //testArray04();
    //testArray05();

    system("pause");
    return 0;
}  // end main
void testArray01()
{
     cout << "*** in testArray01 ***\n";
     int row;
     int col;

     int k1[5];


     // print out the array (garbage)
     for(row=0; row<5; row++)
     {
         cout << k1[row] << "\n";
     }
     cout << "\n\n";

     /*****************************************
     // zero out the array
     for(row=0; row<5; row++)
     {
         k1[row]= 0;
     }

     // print out the array (zeros)
     for(row=0; row<5; row++)
     {
         cout << k1[row] << "\n";
     }
     cout << "\n\n";

     // assign some values
     k1[3] = 5;
     k1[4] = 3;
     k1[0] = k1[3] + k1[4];

     // print out the array (zeros)
     for(row=0; row<5; row++)
     {
         cout << k1[row] << "\n";
     }
     cout << "\n\n";
     *************************************/

}
void testArray02()
{
     cout << "*** in testArray04442 ***\n";
     int row;
     int col;

     int k1[3][5];
     for(row=0; row<3; row++)
     {
         cout << "\n";
         for(col=0; col<5; col++)
         {
            cout << k1[row][col] << "  ";
         }
     }
     cout << "\n\n";

}
void testArray03()
{
     cout << "*** in testArray03 ***\n";
     int row;
     int col;

     int k1[3][5];
     for(row=0; row<3; row++)
     {
         cout << "\n";
         for(col=0; col<5; col++)
         {
            cout << k1[row][col] << "  ";
         }
     }
     cout << "\n\n";
}
void testArray04()
{
     cout << "*** in testArray04 ***\n";
}
void testArray05()
{
     cout << "*** in testArray05 ***\n";
     int row;
     int col;

     int k1[5];

     // print out the array (garbage)
     for(row=0; row<5; row++)
     {
         cout << k1[row] << "\n";
     }
     cout << "\n\n";

     // zero out the array
     for(row=0; row<5; row++)
     {
         k1[row]= 0;
     }

     // print out the array (garbage)
     for(row = -10; row<15; row++)
     {
         cout << k1[row] << "\n";
     }
     cout << "\n\n";

     // zero out the array
     for(row=0; row<5999999; row++)
     {
         k1[row]= 0;
     }
}































