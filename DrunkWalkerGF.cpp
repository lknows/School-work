/***************************************************************
*
*          program name:   	DrunkenWalker
*          author:         	Grant Fisher
*          date due:       	11-14-13
*          remarks:        	simulates a drunken walk
*
*
****************************************************************/

/**********************************
*   libraries
**********************************/
#include <iostream>                // needed for cin and cout
#include <cstdlib>
using namespace std;

/**********************************
*   proto types
***********************************/
void initializeArray(); //enters a period in all entries
void initializeAlphabet(); //enters the alphabet
void printArray(); //prints array containing the drunken walk
void randDirection(); //generates a random direction


/***********************************
*      global variables
************************************/
char Array[10][10]; //Declares the array
int  direction;     //Creates a variable for the direction
char Alphabet[26];  //Holds the a value for the alphabet counter

int main ()
{
    /*****************************
    *    local variables
    ******************************/
	int row;
	int col;
	int alphaIndex = 0; //letters of the alphabet
	int stopCode=0;

	initializeArray();
	initializeAlphabet();
	printArray();

    ///Request the starting place of the drunk
	cout << "Please enter the row:";
    cin >> row;
    cout << "Please enter the column:";
    cin >> col;

    Array[row][col] = Alphabet[alphaIndex]; //Initializes the The drunk's first place
    alphaIndex = alphaIndex+1;

    while(stopCode != 1)
    	{
    	    randDirection();
    	    switch(direction)
    	    {

    	        ///If the drunk heads north:
    	        case 0:

    	            ///Check North
    	            if (Array[row-1][col]=='.')
                    {
                        Array[row-1][col]=Alphabet[alphaIndex];
                        row=row-1;
                        alphaIndex++;
                    }

                    ///Check East
                    else if (Array[row][col+1]=='.')
                    {
                        Array[row][col+1]=Alphabet[alphaIndex];
                        col=col+1;
                        alphaIndex++;
                    }

                    ///Check South
                    else if (Array[row+1][col]=='.')
                    {
                        Array[row+1][col]=Alphabet[alphaIndex];
                        row=row+1;
                        alphaIndex++;
                    }

                    ///Check West
                    else if (Array[row][col-1]=='.')
                    {
                        Array[row][col-1]=Alphabet[alphaIndex];
                        col=col-1;
                        alphaIndex++;
                    }

                    ///Check for a Blocked path
                    else if (Array[row-1][col]=='\0' || Array[row-1][col] ==Alphabet[alphaIndex])
                    {
                        cout << "Arrested -- in jail.";
                        alphaIndex=26;
                    }

    	                 break;

                ///If the drunk heads East
    	        case 1:

    	            ///Check East
    	            if (Array[row][col+1]=='.')
                    {
                        Array[row][col+1]=Alphabet[alphaIndex];
                        col=col+1;
                        alphaIndex++;
                    }

                    ///Check South
                    else if (Array[row+1][col]=='.')
                    {
                        Array[row+1][col]=Alphabet[alphaIndex];
                        row=row+1;
                        alphaIndex++;
                    }

                    ///Check West
                    else if (Array[row][col-1]=='.')
                    {
                        Array[row][col-1]=Alphabet[alphaIndex];
                        col=col-1;
                        alphaIndex++;
                    }

                    ///Check North
                    else if (Array[row-1][col]=='.')
                    {
                        Array[row-1][col]=Alphabet[alphaIndex];
                        row=row-1;
                        alphaIndex++;
                    }

                    ///Check for a blocked path
                    else if (Array[row][col+1]=='\0' || Array[row][col+1] ==Alphabet[alphaIndex])
                    {
                        cout << "Arrested -- in jail.";
                        alphaIndex=26;
                    }
    	                 break;
                ///If the drunk heads south
    	        case 2:

    	            ///Check South
    	            if (Array[row+1][col]=='.')
                    {
                        Array[row+1][col]=Alphabet[alphaIndex];
                        row=row+1;
                        alphaIndex++;
                    }

                    ///Check West
                    else if (Array[row][col-1]=='.')
                    {
                        Array[row][col-1]=Alphabet[alphaIndex];
                        col=col-1;
                        alphaIndex++;
                    }

                    ///Check North
                    else if (Array[row-1][col]=='.')
                    {
                        Array[row-1][col]=Alphabet[alphaIndex];
                        row=row-1;
                        alphaIndex++;
                    }

                    ///Check East
                    else if (Array[row][col+1]=='.')
                    {
                        Array[row][col+1]=Alphabet[alphaIndex];
                        col=col+1;
                        alphaIndex++;
                    }

                    ///Check for a blocked path
                    else if (Array[row+1][col]=='\0' || Array[row+1][col] ==Alphabet[alphaIndex])
                    {
                        cout << "Arrested -- in jail.";
                        alphaIndex=26;
                    }
    	                 break;

                ///If the drunk heads West
    	        case 3:

    	            ///Check West
    	            if (Array[row][col-1]=='.')
    	            {
                        Array[row][col-1]=Alphabet[alphaIndex];
                        col=col-1;
                        alphaIndex++;
                    }

                    ///Check North
                    else if (Array[row-1][col]=='.')
                    {
                        Array[row-1][col]=Alphabet[alphaIndex];
                        row=row-1;
                        alphaIndex++;
                    }

                    ///Check East
                    else if (Array[row][col+1]=='.')
                    {
                        Array[row][col+1]=Alphabet[alphaIndex];
                        col=col+1;
                        alphaIndex++;
                    }

                    ///Check South
                    else if (Array[row+1][col]=='.')
                    {
                        Array[row+1][col]=Alphabet[alphaIndex];
                        row=row+1;
                        alphaIndex++;
                    }

                    ///Check for a blocked path
                    else if (Array[row][col-1]=='\0' || Array[row][col-1] ==Alphabet[alphaIndex])
                    {
                        cout << "Arrested -- in jail.";
                        alphaIndex=26;
                    }

    	                 break;
    	        default: break;
    	    } // end switch

    	    if(alphaIndex == 26)
    	    {
               cout << "\n\nMade it home.";
    	       stopCode = 1;
    	    }
    	} // end while loop

	printArray();

	system("pause");

    return 0;
} //end of main()

/********************************************
*    set all elements in the array to a '.'
********************************************/
void initializeArray()
{
     int row;
     int col;
     for(row=0; row<10; row++)
     {
         for(col=0; col<10; col++)
         {
             Array[row][col] = '.';
         }
     }
}// end of initializeArray()

/**************************************************
*   initialize the alphabet array from 'A' to 'Z'
**************************************************/
void initializeAlphabet()
{
	int row=0;

	for(int n = 65; n<91; n++)
	{
		Alphabet[row]=n;
		row++;
	}
	for(int x=0; x<27; x++)
	{
	cout << Alphabet[x];
	}

}//end of initializeAlphabet()

/********************************************
*    print out the 10X10 array
********************************************/
void printArray()
{
     int row;
     int col;
     for(row=0; row<10; row++)
     {
         cout << "\n";
         for(col=0; col<10; col++)
         {
             cout << Array[row][col];
         }
     }
     cout << "\n\n";
}// end  of printArray()

/********************************************
*    creata a random number from 0~4 and
*    save the number in a GLOBAL variable
*    named  direction
********************************************/
void randDirection()
{
     int n = rand() % 100;
     direction = n % 4;
}//end of randDirection();












