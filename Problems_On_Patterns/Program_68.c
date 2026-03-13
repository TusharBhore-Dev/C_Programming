/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, calculate the stopping condition: (iCol - i + 1)
            Iterate through columns starting from j = iCol, decrementing j (Inner Loop)
            The inner loop continues as long as j is greater than or equal to the limit
            Logic: The first row prints iCol, the second prints iCol and (iCol-1), etc.
            Inside the inner loop, print the value of j followed by a tab
            After each row, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       5
///     Expected Pattern : 5    4
//                         5    4    3
///                        5    4    3    2
////                       5    4    3    2    1
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
//                  numeric pattern starting from iCol and 
//                  decrementing in each column.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    // Outer loop for rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // Inner loop starts at the max column value and counts down
        // The limit ( (iCol - i) + 1 ) ensures the triangle grows 
        // by one element each row.
        for( j = iCol; j >= ( ( iCol - i ) + 1 ) ; j-- )
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