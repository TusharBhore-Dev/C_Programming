/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, calculate the limit for columns: (iCol - i + 1)
            Iterate through columns from j = 1 to this calculated limit (Inner Loop)
            Logic: As the row number 'i' increases, the number of stars decreases
            Inside the inner loop, print an asterisk ("*")
            After the inner loop finishes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       * * * *
///     Expected Pattern : * * *
//                         * *
///                        *
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
//  Description :   It is used to print an Inverted Lower Triangular 
//                  pattern (Upper Left Triangle) of asterisks.
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
        
        // Inner loop limit: (iCol - i + 1) 
        // Example if iCol is 4:
        // i=1 -> j <= 4
        // i=2 -> j <= 3
        // i=3 -> j <= 2
        // i=4 -> j <= 1
        for( j = 1; j <= ( ( iCol - i ) + 1 ); j++ )
        {

            printf( "*\t" );
            
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