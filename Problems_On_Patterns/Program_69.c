/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Check if inputs are valid (positive numbers)
        Call DisplayPattern:
            Iterate through rows from i = 1 to iRow (Outer Loop)
            In each row:
                Initialize j to 1 (counter) and k to iCol (starting number)
                Calculate the column limit: (iCol - i + 1)
                Iterate through columns until j reaches the limit (Inner Loop)
                    Print the value of k followed by a tab
                    Decrement k (k--) to get the next descending number
                    Increment j (j++) to move to the next column
            After the inner loop finishes, print a newline ("\n")
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
//                  decrementing per column.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0 , k = 0;

    // Outer loop for rows
    for( i = 1; i <= iRow; i++ )
    {
        
        // k is reset to iCol at the start of every row
        // j is the loop counter that controls the shrinking width
        for( j = 1 , k = iCol; j <= ( ( iCol - i ) + 1 ) ; j++ )
        {

            printf( "%d\t" ,k );
            k--;                                     // Decrement the value to be printed
            
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