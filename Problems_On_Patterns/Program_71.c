/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, iterate through columns from j = 1 to iCol (Inner Loop)
            Logic for printing an asterisk (*):
                1. If it's the first row (i == 1) or last row (i == iRow)
                2. If it's the first column (j == 1) or last column (j == iCol)
                3. If the row index equals the column index (i == j) -> Diagonal
            If any of these conditions are true, print "*\t"
            Else, print a blank space "\t"
            After the inner loop finishes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       * * * * *
///     Expected Pattern : * *     *
//                         *   *   *
///                        *     * *
////                       * * * * *
/////
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description :   It is used to print a Square Box pattern 
//                  with a leading diagonal line.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0 ;

    // Outer loop for rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // Inner loop for columns
        for( j = 1; j <= iCol; j++ )
        {

            // Conditional logic for hollow square + diagonal
            if( i == 1 || j == 1 || i == j || i == iRow || j == iCol )
            {
                printf( "*\t");
            }
            else
            {
                printf(" \t"); // Print space for hollow effect
            }
            
        }    
        
        printf("\n");

    }

}   // End of DisplayPattern

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iRow = 0 , iCol = 0;

    printf( "Enter how many rows you want :\t" );
    scanf( "%d" ,&iRow );

    printf( "Enter how many coloms you want :\t" );
    scanf( "%d" ,&iCol );

    if( iRow < 0 || iCol < 0 )
    {

        printf("Error : Invalid Input.\n");
        printf( "Please provide positive numbers only.\n" );
        return -1;

    }

    DisplayPattern( iRow , iCol );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////