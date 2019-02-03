///////////////////////////////////////////////////////////////////////////////
//  Author: Grant Fisher
//  Pipeline ID: gaf2t
//  Course#: 3240-001
//  Turnin code: cs_p1
//  Due: September 12th, 11:20AM
//  Remarks: This program functions as the command line 'xxd' with one argument
//           ie. xxd some_filename
//              Inaccuracy: Last line of output is occasionally formatted wrong
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 256

//Prototypes
void hexDump(void*, int);

///////////////////////MAIN
int main(int argc, char *argv[])
    {
            //Create and open filestream
            FILE *myfile;
            myfile =fopen(argv[1],"rb");

            for ( ; ; )
            {
                unsigned char buffer[SIZE];
                size_t n = fread(buffer, 1, SIZE, myfile);

                if (n > 0) 
                    hexDump(buffer, n);
                if (n < SIZE) 
                    break;
            }

        fclose(myfile);

            return 0;
    }

////////////////MEMBER FUNCTIONS
void hexDump (void *addr, int len) 
{
    int i;
    unsigned char bufferLine[17];
    unsigned char *pc = (unsigned char*)addr;

    for (i = 0; i < len; i++) 
    {
        if ((i % 16) == 0) 
        {
            if (i != 0)
                printf (" %s\n", bufferLine);

            if (pc[i] == 0x00) exit(0);
            printf ("%08x: ", i);
        }

        // Prints Hexcdoes that represent each chars.
        printf ("%02x", pc[i]);
        if ((i % 2) == 1) 
            printf (" "); 

        if ((pc[i] < 0x20) || (pc[i] > 0x7e))
        {
            bufferLine[i % 16] = '.';
        }

        else
        {
           bufferLine[i % 16] = pc[i];
        }    

        bufferLine[(i % 16) + 1] = '\0'; //Clears the next array buffLine
    }


    while ((i % 16) != 0) 
    {
        printf ("  ");
        i++;
    }

    //printf ("     %s\n", bufferLine);
    printf ("   %s\n", bufferLine);
}
