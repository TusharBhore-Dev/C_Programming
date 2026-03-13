
/////////////////////////////////////////////////////////
//////
////                       *   *   *   *   *
///     Expected Pattern : *           *   *
//                         *       *       *
///                        *   *           *
////                       *   *   *   *   *
/////
/////////////////////////////////////////////////////////
/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow (Outer Loop):
                Initialize inner counter j to 1
                While j is less than or equal to iCol (Inner Loop):
                    Check Conditions for printing '*':
                    1. If (i == 1) -> First Row boundary
                    2. If (i == iRow) -> Last Row boundary
                    3. If (j == 1) -> First Column boundary
                    4. If (j == iCol) -> Last Column boundary
                    5. If (i + j == iCol + 1) -> Anti-Diagonal (Top-Right to Bottom-Left)
                    
                    If any condition is true, print "*\t"
                    Else, print a tabbed space " \t"
                    
                    Increment j
                After inner loop, increment i and print a newline (\n)
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
//  Description   : Prints a hollow square box with an anti-diagonal 
//                  using nested while loops.
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Tushar vikas bhore
//  Date          : 04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    i = 1;
    while( i <= iRow )                               // Outer loop for Rows
    {
        
        j = 1 ;                                      // Reset inner counter

        while( j <= iCol)                            // Inner loop for Columns
        {
            
            // Logic for boundary stars and the anti-diagonal (i + j == iCol + 1)
            if( i == 1 || j == 1 || i == iRow || j == iCol || ( ( i + j ) == iCol + 1 ))
            {
                printf( "*\t");
            }
            else
            {
                printf(" \t");                       // Print tabbed space for hollow effect
            }

            j++;                                     // Increment inner counter
            
        }    
        
        i++;                                         // Increment outer counter
        printf("\n");                                // Line break for next row

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