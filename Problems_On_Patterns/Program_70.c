/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Reset inner counter j to 1
                Reset value to be printed k to the original column count (iCol)
                Calculate the column limit for the current row: (iCol - i + 1)
                While j is less than or equal to that limit:
                    Print the value of k followed by a tab
                    Decrement k (k--) to move to the next descending number
                    Increment j (j++) to move to the next column
                End inner loop
                Increment i (i++) and print a newline (\n)
            End outer loop
    STOP
*/

/////////////////////////////////////////////////////////
//////
////                       5    4    3    2    1
///     Expected Pattern : 5    4    3    2
//                         5    4    3
///                        5    4
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
//                  numeric pattern starting from iCol and 
//                  decrementing per column using nested while loops.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0 , k = 0;

    i = 1;
    while( i <= iRow )                               // Outer loop for Rows
    {
        
        // Resetting the column counter and the starting value for each row
        j = 1; 
        k = iCol;

        // Inner loop limit handles the shrinking width: (iCol - i + 1)
        while( j <= ( ( iCol - i ) + 1 ) )           // Inner loop for Columns
        {

            printf( "%d\t" ,k );
            k--;                                     // Decrease the number to print
            j++;                                     // Increase the column counter
            
        }    
        
        i++;                                         // Move to next row
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

    printf( "Enter how many columns you want :\t" );
    scanf( "%d" ,&iCol );

    // Validation to prevent negative dimensions
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