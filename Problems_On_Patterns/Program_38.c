/*
    Algorithm

    START
        Initialize a counter variable iCnt to 0
        Iterate using a for loop from 1 up to 5
        In each iteration, print an asterisk (*) followed by a tab space
        Stop the loop after 5 iterations
        Return 0 to terminate the program
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

    for( iCnt = 1; iCnt <= 5; iCnt++ )               // Loop to iterate 5 times
    {

        printf( "*\t" );                             // Print asterisk

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