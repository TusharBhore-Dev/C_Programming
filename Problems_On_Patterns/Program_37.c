/*
    Algorithm

    START
        Define a static variable iCnt and initialize it to 1
        Check the base condition: if iCnt is less than or equal to 5
        If true:
            Print the current value of iCnt with a tab space
            Increment iCnt by 1
            Recursively call the main function
        Stop the recursion when iCnt exceeds 5
        Return 0 to terminate the program
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

    static int iCnt = 1;                             // Persistent counter for recursion

    if( iCnt <= 5 )                                  // Base condition for recursion
    {

        printf( "%d\t" ,iCnt );                      // Print current number
        iCnt++;                                      // Increment counter

        main();                                      // Recursive call to main
        
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