/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, iterate through columns from j = 1 to i (Inner Loop)
            Logic: The number of columns printed is equal to the current row number
            Inside the inner loop, print an asterisk ("*")
            After the inner loop completes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       *
///     Expected Pattern : * * 
//                         * * *
///                        * * * * 
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
//                  pattern of asterisks.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    // Outer loop controls the number of rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // Inner loop controls the number of columns
        // Condition (j <= i) creates the triangular shape
        for( j = 1; j <= i; j++ )
        {

            printf("*\t");
            
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