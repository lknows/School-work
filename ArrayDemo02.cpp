/*****************************************************
* 
*      program name:       Array demo
*      Author:             Grant Fisher
*      date due:           11/16/09
*      remarks:            array
                           1.  collection of 
                               like data types
                           2.  share a name   
                           3.  refferenced with an index 
*                             
*****************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>                // needed for I/O

/**********************
    pre-processor
***********************/
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
void testOneDArray();
void loadOneDArray();
void loadTwoDArray();
void testBoundsChecking();
void testAddresses();
void testAddresses(int*);
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
     /*******************************
     *   local variables            *
     *******************************/
     int kk [5];

     testOneDArray();
     loadOneDArray();
     loadOneDArray();     
     testBoundsChecking();
     testAddresses();  
     testAddresses(kk);     
     system("pause");          // makes the DOS screen pause
     return 0;
}  // end main

void testOneDArray()
{
     cout << "in test for 1D array  \n";
     int  x = 0;
     int  xa1 [5];
     char xa2[5];
     
     /********************************************    
     // print array - garbage     
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     cout << "\n\n";
     
     /********************************************
     //initialize array
     for(x=0; x<5; x++)
     {
          xa1[x] = x*x;
     }

     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     cout << "\n\n";  
     
     // change single elements
     xa1[3] = 3;
     xa1[0] = 9;
     xa1[4] = xa1[3] + xa1[0];
 
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     cout << "\n\n"; 
     
     
     /********************************************    
     // print array - garbage
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa2[x] << "\n";
     }
     cout << "\n\n";         
      
     //initialize array
     for(x=0; x<5; x++)
     {
          xa2[x] = (char)(65+x);
     }

     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa2[x] << "\n";
     }
     cout << "\n\n";      

     
     
     /********************************************    
     xa2[0] = 'X';
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa2[x] << "\n";
     }
     cout << "\n\n";       
     *********************************************/     
            
}
void loadOneDArray()
{
     cout << "in test for 1D array  \n";
     
     int x = 0;
     //int xa0[5] = {1, 3, 5, 7, 9, 10, 11};     
     int xa1[5] = {1, 3, 5, 7, 9};
     int xa2[5] = {1, 3, 5};
     int xa3[5] = {};
       
     /********************************************            
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     cout << "\n\n";
     /********************************************    
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa2[x] << "\n";
     }
     cout << "\n\n"; 
     /********************************************    
     for(x=0; x<5; x++)
     {
          cout << x << "  " << xa3[x] << "\n";
     }
     cout << "\n\n";  
     ********************************************/            
}
void loadTwoDArray()
{
     cout << "in test for 1D array  \n";
     
     int row = 0;
     int col = 0;
     
     int ax[5][7];
     int bx[5][7] = {
                      {1, 2, 3, 4, 5, 6, 7},
                      {4, 4, 4, 4, 4, 4, 4},
                      {9, 8, 7, 6, 5, 4, 3},
                      {4, 2, 5, 3, 4, 4, 4},
                      {9, 8, 7, 6, 5, 4, 4}
                     }; 
                     
     int cx[5][7] = {1, 2, 3, 4, 5, 6, 7, 5, 4, 4, 4, 4, 4, 4, 9, 8, 7, 6, 5, 4, 3, 5, 9, 5, 3, 4, 4, 4};
     
     /********************************************                                         
     for(row=0; row<5; row++)
     {
          cout << "\n";
          for(col=2; col<7; col++)
          {
              cout << ax[row][col] << " ";
          }
     }
     cout << "\n\n";
     /********************************************
     for(row=0; row<5; row++)
     {
          cout << "\n";
          for(col=2; col<7; col++)
          {
              cout << bx[row][col] << " ";
          }
     }
     cout << "\n\n";    
     
     /********************************************     
     for(row=0; row<5; row++)
     {
          cout << "\n";
          for(col=2; col<7; col++)
          {
              cout << cx[row][col] << " ";
          }
     }
     cout << "\n\n";             
     ********************************************/
}
void testBoundsChecking()
{
     cout << "in test bounds checking  \n";
     int x = 0;
     //int xa0[5] = {1, 3, 5, 7, 9, 10, 11};     
     int xa1[5] = {1, 3, 5, 7, 9};
     int xa2[5] = {1, 3, 5};
     int xa3[5] = {}; 
     /********************************************             
     for(x=0; x<15; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     /********************************************     
     cout << "\n\n";     
     for(x=-10; x<15000; x++)
     {
          cout << x << "  " << xa1[x] << "\n";
     }
     cout << "\n\n";         
     ********************************************/
}
void testAddresses()
{
     cout << "in test addesses  \n";
     int k[5];
     cout << k << "\n";
     cout << &k << "\n";
     cout << &k[0] << "\n";
}
void testAddresses(int k[5])
{
     cout << "in test passing an array  \n";
     
     cout << k << "\n";
     cout << &k << "\n";
     cout << &k[0] << "\n";
}     
     
     
     
     
     
         
   
