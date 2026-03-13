/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Check if inputs are valid (positive numbers)
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, iterate through columns from j = 1 to i (Inner Loop)
            Logic: The inner loop prints the current column index 'j'
            The condition (j <= i) ensures the number of digits increases with each row
            After the inner loop finishes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       1
///     Expected Pattern : 1    2   
//                         1    2   3
///                        1    2   3   4 
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
//                  numeric pattern where each row starts from 1.
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
        
        // Inner loop for managing columns
        // j <= i ensures we print 'i' elements in the 'i-th' row
        for( j = 1; j <= i; j++ )
        {

            printf( "%d\t" ,j );
            
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