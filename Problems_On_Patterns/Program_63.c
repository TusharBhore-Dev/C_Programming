/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from the user
        Validate that the inputs are positive
        Call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Initialize inner counter j to 1
                Calculate the column limit: (iCol - i + 1)
                While j is less than or equal to that limit:
                    Print an asterisk ("*") followed by a tab
                    Increment j
                After inner loop, print a newline (\n) and increment i
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

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description :   It is used to print an Inverted Lower Triangular 
//                  pattern using nested while loops.
//  Input :         Integer, Integer
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern( int iRow , int iCol )
{

    int i = 0 , j = 0;

    i = 1;
    while( i <= iRow )                               // Outer loop for Rows
    {

        j = 1;                                       // Reset inner counter
        
        // Logic: (iCol - i + 1) reduces the number of columns as row index 'i' increases
        while( j <= ( ( iCol - i ) + 1 ) )           // Inner loop for Columns
        {

            printf( "*\t" );

            j++;                                     // Increment inner counter

        }    
        
        i++;                                         // Increment outer counter
        printf("\n");                                // Move to the next row

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