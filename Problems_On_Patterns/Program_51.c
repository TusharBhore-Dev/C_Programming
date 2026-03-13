/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from user
        If inputs are negative, display error and terminate
        Otherwise, call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Initialize inner counter j to 1
                While j is less than or equal to iCol:
                    If j is odd (j % 2 != 0):
                        Print "#"
                    Otherwise (j is even):
                        Print the value of j
                    Increment j
                After the inner loop, increment i and print a newline
    STOP
*/

/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : #    2   #   4   #   6
//                         #    2   #   4   #   6
///                        #    2   #   4   #   6
////
/////
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description :   It is used to print a 2D grid pattern with 
//                  symbols at odd columns using nested while loops.         
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    i = 1;
    while( i <= iRow )                               // Outer loop for Rows
    {

        j = 1;                                       // Reset inner counter
        
        while( j <= iCol )                           // Inner loop for Columns
        {

            if( j % 2 != 0 )                         // Logic: Check if j is odd
            {

                printf( "#\t" );

            }
            else                                     // Logic: j is even
            {

                printf( "%d\t" ,j );

            }

            j++;                                     // Increment inner counter

        }    
        
        i++;                                         // Increment outer counter
        printf("\n");                                // Move to next line

    }

}   // End of DisplayPattern

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iRow = 0 , iCol = 0;

    printf( "Enter how many rows you want :\t" );
    scanf( "%d" ,&iRow );

    printf( "Enter how many coloms you want :\t" );
    scanf( "%d" ,&iCol );

    // Filter to ensure logic doesn't run with invalid/negative numbers
    if( iRow < 0 || iCol < 0 )
    {

        printf("Error : Invalid Input.\n");
        printf( "Please provide positive numbers only.\n" );
        return -1;

    }

    DisplayPattern( iRow , iCol );                   // Function Call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////