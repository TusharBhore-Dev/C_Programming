/*
    Algorithm

    START
        Initialize a counter variable iCnt to 0
        Assign 1 to iCnt to start the loop
        Use a while loop with the condition (iCnt <= 5)
        Inside the loop, print an asterisk (*) followed by a tab space
        Increment iCnt by 1 in each iteration
        Stop the loop once iCnt exceeds 5
    STOP
*/

/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : * * * * *
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

    while(  iCnt <= 5 )                              // Loop to iterate 5 times
    {

        printf( "*\t" );                             // Print asterisk
        iCnt++;                                      // Increment counter
    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : (Static execution)
//  Output : * * * * *
//
/////////////////////////////////////////////////////////////////