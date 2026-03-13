/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Check if inputs are valid (positive numbers)
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, calculate the limit for columns: (iCol - i + 1)
            Iterate through columns from j = 1 to this calculated limit (Inner Loop)
            Logic: The inner loop prints the current row index 'i'
            Since 'i' is constant for the whole inner loop, all numbers in a row are same
            The shrinking limit (iCol - i + 1) creates the inverted triangular shape
            After the inner loop finishes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       1    1   1   1
///     Expected Pattern : 2    2   2   2
//                         3    3   3
///                        4    4
////                       5
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
//  Description :   It is used to print an Inverted Lower Triangular 
//                  numeric pattern where each row contains the 
//                  current row number.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    // Outer loop for managing rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // Inner loop limit (iCol - i + 1) handles the inverted shape
        for( j = 1; j <= ( ( iCol - i ) + 1 ); j++ )
        {

            // Printing 'i' ensures horizontal consistency in each row
            printf( "%d\t" ,i );
            
        }    
        
        printf("\n");

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