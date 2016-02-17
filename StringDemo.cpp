/****************************************************************************
*
*      program name:       StringDemo
*      Author:             Grant Fisher
*      remarks:            demo of various string functions
*
*                          string in C
*                             array of characters terminated by a null "\0"
*****************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>
#include <cstring>
/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*          function prototypes
****************************************/
void stringDemo01();
void stringDemo02();
void stringDemo03();
void stringDemo04();
void stringDemo05();
void stringDemo06();
void stringDemo07();
void stringDemo08();
void stringDemo09();
void stringDemo10();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
    //stringDemo01();
    //stringDemo02();
    //stringDemo03();
    //stringDemo04();
    //stringDemo05();
    //stringDemo06();
    //stringDemo07();
    //stringDemo08();
    stringDemo09();
    //stringDemo10();

    system("pause");
    return 0;
}  // end main

/*************************************************
*    look at strings
*    array of characters terminated by a null
*************************************************/
void stringDemo01()
{
     cout << "*** stringDemo01 ***\n\n";
     char str01[20];

     cout << "012345678901234567890123456789\n";
     cout << str01 << "\n\n";

     /**********************************************
     cout << "012345678901234567890123456789\n";
     str01[14] = '\0';
     cout << str01 << "\n\n";

     /**********************************************
     cout << "012345678901234567890123456789\n";
     str01[14] = 'q';
     cout << str01 << "\n\n";

     /**********************************************
     cout << "012345678901234567890123456789\n";
     str01[23] = 'q';
     cout << str01 << "\n\n";
     /**********************************************/
}
void stringDemo02()
{
     cout << "*** stringDemo02 ***\n";
     char str01[10];
     char str02[10];

     cout << "012345678901234567890123456789\n";
     cout << str01[0] << "\n";
     cout << str02[0] << "\n\n";

     /**********************************************
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";

     /**********************************************
     cout << "enter a String: ";
     cin  >> str01;
     cout << "\n";
     cout << "enter a String: ";
     cin  >> str02;
     cout << "\n";
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";
     cout << "\n";

     /**********************************************
     cout << "012345678901234567890123456789\n";
     str01[8] = 'X';
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";
     /**********************************************/

}
/********************************************
*   using strcpy and looking at addresses
********************************************/
void stringDemo03()
{
     cout << "*** stringDemo03 ***\n\n";
     char str01[10];
     char str02[10];

     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";

     /****************************************
     strcpy(str01, "Titans");
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n\n";

     /****************************************
     strcpy(str01, "Cleveland Browns");
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n";

     /***************************************
     cout << "let's look at addresses\n\n";
     cout << "  addresses by &str01\n";
     cout << &str01 << "\n";
     cout << &str02 << "\n\n";

     /***************************************
     cout << "enter a String: ";
     cin  >> str02;

     strcpy(str01, str02);
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     /*****************************************/

}
/*************************
*   using strcat
*************************/
void stringDemo04()
{
     cout << "*** stringDemo04 ***\n";

     char str01[20];
     char str02[20];
     char str03[20];

     cout << "\n";
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n";
     cout << str03 << "<--\n\n";

     /****************************************
     strcpy(str01, "Peyton Manning");
     strcpy(str02, "hates Titans");
     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";

     /***************************************
     strcpy(str03, str01);
     strcat(str03, " ");
     strcat(str03, str02);

     cout << str01 << "<--\n";
     cout << str02 << "<--\n\n";
     cout << str03 << "<--\n";
     /****************************************/
}

/*************************
*   using strlen
*************************/
void stringDemo05()
{
     cout << "*** stringDemo05 ***\n";

     char str01[20];
     char str02[20];
     char str03[20];

     cout << "\n";
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n";
     cout << str03 << "<--\n\n";

     cout << strlen(str01) << "<--\n";
     cout << strlen(str02) << "<--\n";
     cout << strlen(str03) << "<--\n\n";

     /****************************************
     strcpy(str01, "Peyton Manning");
     strcpy(str02, "hates Titans");

     strcpy(str03, str01);
     strcat(str03, " ");
     strcat(str03, str02);

     cout << "\n";
     cout << "012345678901234567890123456789\n";
     cout << str01 << "<--\n";
     cout << str02 << "<--\n";
     cout << str03 << "<--\n\n";

     cout << strlen(str01) << "<--\n";
     cout << strlen(str02) << "<--\n";
     cout << strlen(str03) << "<--\n\n";
     /*****************************************/

}

/*************************
*   using strcmp
*************************/
void stringDemo06()
{
     cout << "*** stringDemo06 ***\n";
     char str01[20];
     char str02[20];
     char str03[20];
     char str04[20];

     strcpy(str01, "Yeyton");
     strcpy(str02, "Peyton");
     strcpy(str03, "Peyt");
     strcpy(str04, "Xeyton");


     cout << strcmp(str01, str02) << "\n";
     cout << strcmp(str01, str03) << "\n";
     cout << strcmp(str01, str04) << "\n";
     cout << strcmp(str01, str01) << "\n";
}
void stringDemo07()
{
     cout << "*** stringDemo07 ***\n";

     char str01[20];

     cout << "enter a String: ";
     /// gets(str01);
     cout << str01 << "<--\n";

}

void stringDemo08()
{
     cout << "*** stringDemo08 ***\n\n";

     char month [12][10];
     char test[10];

     //cout << test << "\n";
     //strcpy(test,"January");
     //cout << test << "\n";


     strcpy(month[0], "January");
     strcpy(month[1], "February");

     for(int row=0; row<12; row++)
     {
         cout << month[row] << "<---\n";
     }
     cout << "\n";

}
void stringDemo09()
{
     cout << "*** stringDemo09 ***\n\n";

     char month1 [12][10] = {
                             {"January"},
                             {"February"},
                             {"March"},
                             {"April"},
                             {"May"},
                             {"June"},
                             {"July"},
                             {"August"},
                             {"September"},
                             {"October"},
                             {"Novermer"},
                             {"December"}
                            };

     for(int row=0; row<12; row++)
     {
         cout << month1[row] << "\n";
     }
     cout << "\n";

     char month2 [12][10] = {"January","February","March","April","May","June",
                             "July","August","September","October","Novermer","December"};

     for(int row=0; row<12; row++)
     {
         cout << month2[row] << "\n";
     }
     cout << "\n";
}
void stringDemo10()
{
     cout << "*** stringDemo10 ***\n\n";

     char month [12][10];

     for(int row=0; row<12; row++)
     {
         cout << "Please enter a month: ";
         cin >> month[row];
     }



     for(int row=0; row<12; row++)
     {
         cout << month[row] << "\n";
     }
     cout << "\n";

}






























