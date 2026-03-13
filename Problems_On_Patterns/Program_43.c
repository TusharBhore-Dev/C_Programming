/*
    Algorithm

    START
        Define a function DisplayPatternRecursive
        Initialize a static variable iCnt to 5
        Check the base condition: if iCnt is greater than or equal to 1
        If true:
            Print the current value of iCnt with a tab space
            Decrement iCnt by 1
            Perform a recursive call to DisplayPatternRecursive
        Stop the recursion when iCnt falls below 1
    STOP
*/

/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 5    4   3   2   1
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
//  Function Name : DisplayPatternRecursive
//  Description :   It is used to print a descending numeric pattern using recursion         
//  Input :         None
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPatternRecursive()
{

    static  int iCnt = 5;                            // Persistent counter across recursive calls

    if( iCnt >= 1 )                                  // Recursive base condition
    {

        printf( "%d\t" ,iCnt );                      // Print current number
        iCnt--;                                      // Decrement counter
    
        DisplayPatternRecursive();                   // Recursive function call
        
    }

}   // End of DisplayPatternRecursive

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

   DisplayPatternRecursive();                        // Function Call

   return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : (Static execution)
//  Output : 5  4  3  2  1
//
/////////////////////////////////////////////////////////////////