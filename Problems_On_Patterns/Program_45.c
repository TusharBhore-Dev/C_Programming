/*
    Algorithm

    START
        Accept the number of rows (iRow) and columns (iCol) from user
        If inputs are negative, display error and terminate
        Otherwise, call DisplayPattern:
            Initialize outer counter i to 1
            While i is less than or equal to iRow:
                Initialize inner counter j to 1
                While j is less than or equal to iCol:
                    Print the value of j with a tab
                    Increment j
                After inner loop, increment i and print a newline
    STOP
*/

/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    2   3   4   5
//                         1    2   3   4   5
///                        1    2   3   4   5
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
//  Description :   It is used to print a 2D grid pattern using nested while loops         
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

        j = 1;                                       // Reset inner counter for each row
        
        while( j <= iCol )                           // Inner loop for Columns
        {

            printf( "%d\t" ,j );
            
            j++;                                     // Increment column counter

        }    
        
        i++;                                         // Increment row counter
        
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
//
//  Testcases successfully handled by the application
//
//  Input  : Rows = 3, Cols = 4
//  Output : 1  2  3  4
//           1  2  3  4
//           1  2  3  4
//
/////////////////////////////////////////////////////////////////