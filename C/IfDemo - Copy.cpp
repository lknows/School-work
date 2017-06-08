/*************************************************************************
* 
*      program name:       IfDemo
*      Author:             Grant Fisher
*      remarks:            demonstrate 
*                            if statement
*                            if/else ladder
*                            switch   
*
*************************************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>                // needed for I/O

/*************************
*     pre-processor
*************************/     
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
void testIf01();
void testIf02();
void testIf03();
void testIf04();
void testIf05();
void ifElseLadder();
void testSwitch();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
 
    testIf01();
    //testIf02();
    //testIf03();
    //testIf04();
    //testIf05();
    //ifElseLadder(); 
    
    //testSwitch();
               
    system("pause");              
    return 0;
}  // end main
void testIf01()
{
     cout << "*** in testIf01 ***\n";
     int x;
     int y;
     int z;
     cout << "enter three ints ";
     cin >> x >> y >> z;
     cout << x << "  " << y << "  " << z << "\n\n";
     
     if(x > y)
     {
        cout << "x is greater than y\n";
        cout << "x is " << x << "\n"; 
     }


     //  hard error to find because of 
     //  = instead od ==

     if(x == y)
     {
        cout << "x is equal to y  02\n";
     }  
     if(x = y)
     {
        cout << "x is equal to y  01\n";
     }  

     // hard error to find ; after if()      
     if(x >= y);
     {
        cout << "should always print\n";
     }   
      
}
void testIf02()
{
     cout << "*** in testIf02 ***\n";
     int x;
     int y;
     int z;
     cout << "enter three ints ";
     cin >> x >> y >> z; 
     
     if(x>y)
     {
         //true part
         cout << "x is greater than y\n";
     }
     else
     {
         // false part
         cout << "x is less than  y\n"; 
     }              
}
void testIf03()
{
     cout << "*** in testIf03 ***\n";
     int x;
     int y;
     int z;
     cout << "enter three ints ";
     cin >> x >> y >> z;  
     
     if(x>y)
     {
         cout << "x is greater than y\n";
         if(z != 17)
         {
              cout << "    z not = 17\n";
         }
         else
         {
              cout << "    z is 17\n";
         }
     }
     else
     {
         cout << "x is less than  y\n"; 
     }         
}

void testIf04()
{
     cout << "*** in testIf04 ***\n";
     int x;
     int y;
     int z;
     cout << "enter three ints ";
     cin >> x >> y >> z;     
}    
void testIf05()
{
   cout << "*** in testIf05 ***\n";
   char marCode;
   
   cout << "enter a marital code: ";
   cin >> marCode;

       if(marCode == 'm' || marCode == 'M')
       {
		   cout <<  ("married - yuk!\n");
	   }
       if(marCode == 's')
       {
		   cout << ("single - happy\n");
	   }
       if(marCode == 'S')
       {
		   cout << ("single - happy\n");
	   }	   
       if(marCode == 'd')
       {
		   cout << ("divorced - broke\n");
	   }
       if(marCode == 'w')
       {
		   cout << ("widowed - free again\n");
	   }
       if(marCode == 'r')
       {
		   cout << ("re-married - stupid\n");
	   }
	   else
       {
		   cout << ("invalid code\n");
	   }	   
}    
void ifElseLadder()
{
   cout << "*** in ifElseLadder ***\n";
   char marCode;
   
   cout << "enter a marital code: ";
   cin >> marCode;

       if(marCode == 'm')
       {
		   cout <<  ("married - yuk!\n");
	   }
       else if(marCode == 'M')
       {
		   cout <<  ("married - yuk!\n");
	   }
       else if(marCode == 's' || marCode == 'S')
       {
		   cout << ("single - happy\n");
	   }
       else if(marCode == 'd')
       {
		   cout << ("divorced - broke\n");
	   }
       else if(marCode == 'w')
       {
		   cout << ("widowed - free again\n");
	   }
       else if(marCode == 'r')
       {
		   cout << ("re-married - stupid\n");
	   }
	   else
       {
		   cout << ("invalid code\n");
	   }	   
}    
void testSwitch()
{
   cout << "*** in testSwitch ***\n";
   char marCode;
   
   cout << "enter a marital code: ";
   cin >> marCode;

   switch(marCode)
   {
	   case 'm': cout << ("married - yuk\n!");
                 break;
	   case 'M': cout << ("married - yuk\n!");
                 break;
                 
       case 'S':          
	   case 's': cout << ("single - happy\n");
                 break;

	   case 'd': cout << ("divorced - broke\n");
                 break;

	   case 'w': cout << ("widowed - free again\n");
                 break;

	   case 'r': cout << ("re-married - stupid\n");
                 break;
       default:  cout << ("bad code entered\n");
   } // end switch
}// end testSwitch

   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
     
    











 

