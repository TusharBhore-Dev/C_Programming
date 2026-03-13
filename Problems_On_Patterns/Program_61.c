/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Check if inputs are valid (positive numbers)
        Call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Initialize inner counter j to 1
                While j is less than or equal to i (Current row number):
                    Print the value of the row index 'i' with a tab space
                    Increment j
                After the inner loop finishes, increment i and print a newline (\n)
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       1
///     Expected Pattern : 2    2   
//                         3    3   3
///                        4    4   4   4 
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
//  Description :   It is used to print a Lower Triangular 
//                  numeric pattern using nested while loops 
//                  where each row contains the row index.
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
        
        while( j <= i )                              // Inner loop limit depends on row index 'i'
        {

            printf( "%d\t" ,i );                     // Print row index 'i'

            j++;                                     // Increment inner counter

        }    
        
        i++;                                         // Increment outer counter
        printf("\n");                                // Line break

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

    if( iRow < 0 || iCol < 0 )                       // Input Validation
    {

        printf("Error : Invalid Input.\n");
        printf( "Please provide positive numbers only.\n" );
        return -1;

    }

    DisplayPattern( iRow , iCol );                   // Function Call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////