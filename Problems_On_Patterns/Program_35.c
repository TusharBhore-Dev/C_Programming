/*
    Algorithm

    START
        Initialize a counter variable iCnt to 0
        Iterate using a for loop from 1 up to 5
        Inside the loop, print the current value of iCnt
        Use a horizontal tab (\t) for spacing between numbers
        Terminate the loop once iCnt exceeds 5
    STOP
*/

/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    2   3   4   5
///
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
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iCnt = 0;

    for( iCnt = 1; iCnt <= 5; iCnt++ )               // Loop to iterate 5 times
    {

        printf( "%d\t" ,iCnt );                      // Print current number

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : (Static execution)
//  Output : 1  2  3  4  5
//
/////////////////////////////////////////////////////////////////