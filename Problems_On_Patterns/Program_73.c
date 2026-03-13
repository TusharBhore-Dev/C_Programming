

/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Check if inputs are valid (positive numbers)
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row, iterate through columns from j = 1 to iCol (Inner Loop)
            Logic for printing an asterisk (*):
                1. If it's the first row (i == 1) or last row (i == iRow)
                2. If it's the first column (j == 1) or last column (j == iCol)
                3. If the sum of row and column index equals iCol + 1 (i + j == iCol + 1)
                   This logic specifically targets the "Anti-Diagonal" (top-right to bottom-left)
            If any of these conditions are true, print "*\t"
            Else, print a blank space "\t"
            After the inner loop finishes, print a newline ("\n")
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       *   *   *   *   *
///     Expected Pattern : *           *   *
//                         *       *       *
///                        *   *           *
////                       *   *   *   *   *
/////
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description :   It is used to print a Hollow Square pattern 
//                  with an Anti-Diagonal line.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0 ;

    // Outer loop for managing rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // Inner loop for managing columns
        for( j = 1; j <= iCol; j++ )
        {

            // Condition for boundaries and the anti-diagonal
            if( i == 1 || j == 1 || i == iRow || j == iCol || ( ( i + j ) == iCol + 1 ))
            {
                printf( "*\t");
            }
            else
            {
                printf(" \t");
            }
            
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