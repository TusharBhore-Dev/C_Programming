/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from user
        If inputs are negative, display error and terminate
        Otherwise, call DisplayPattern:
            Iterate through rows from 1 to iRow (Outer Loop)
            In each row, iterate through columns from 1 to iCol (Inner Loop)
            Inside inner loop, check if the current column index (j) is odd
                If odd (j % 2 != 0), print "#"
                Otherwise (j is even), print the value of j
            After each row, print a newline character (\n)
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
//                  symbols at odd columns and numbers at even columns.         
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    for( i = 1; i <= iRow; i++ )                     // Outer loop for Rows
    {
        
        for( j = 1; j <= iCol; j++ )                 // Inner loop for Columns
        {

            if( j % 2 != 0 )                         // Logic: Check if column index is odd
            {

                printf( "#\t" );                     // Print symbol for odd columns

            }
            else                                     // Column index is even
            {

                printf( "%d\t" ,j );                 // Print number for even columns

            }

        }    
        
        printf("\n");                                // Newline after each row

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