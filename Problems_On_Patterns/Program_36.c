/*
    Algorithm

    START
        Initialize a counter variable iCnt to 0
        Assign 1 to iCnt to start the sequence
        Use a while loop with the condition (iCnt <= 5)
        Inside the loop, print the current value of iCnt
        Increment iCnt by 1 in each iteration
        Stop the loop once iCnt exceeds 5
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

    iCnt = 1;

    while( iCnt <= 5 )                               // Loop to iterate 5 times
    {

        printf( "%d\t" ,iCnt );                      // Print current number
        iCnt++;                                      // Increment counter

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