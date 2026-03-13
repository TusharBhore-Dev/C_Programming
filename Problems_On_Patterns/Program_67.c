/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Initialize inner counter j to 1
                Calculate the column limit for this row: (iCol - i + 1)
                While j is less than or equal to that limit:
                    Print the value of the current row index 'i' followed by a tab
                    Increment j
                After the inner loop finishes, increment i and print a newline (\n)
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

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description   : It is used to print an Inverted Lower Triangular 
//                  numeric pattern where each row contains the 
//                  row index using nested while loops.
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

        j = 1;                                       // Reset inner counter
        
        // Inner loop limit (iCol - i + 1) creates the inverted triangle shape
        while( j <= ( ( iCol - i ) + 1 ) )           // Inner loop for Columns
        {

            printf( "%d\t" ,i );                     // Printing row index 'i'

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

    printf( "Enter how many columns you want :\t" );
    scanf( "%d" ,&iCol );

    // Validation for positive inputs
    if( iRow < 0 || iCol < 0 )
    {

        printf("Error : Invalid Input.\n");
        printf( "Please provide positive numbers only.\n" );
        return -1;

    }

    DisplayPattern( iRow , iCol );                   // Function Call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////