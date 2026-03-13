/*
    Algorithm

    START
        Define a function DisplayPattern to handle the logic
        Initialize a counter variable iCnt to 5
        Use a while loop with the condition (iCnt >= 1)
        Inside the loop, print the current value of iCnt with a tab space
        Decrement iCnt by 1 in each step
        Call the function from the main entry point
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
//  Function Name : DisplayPattern
//  Description :   It is used to print a descending numeric pattern using while loop         
//  Input :         None
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayPattern()
{

    int iCnt = 0;

    iCnt = 5;

    while( iCnt >= 1 )                               // Loop to iterate from 5 down to 1
    {

        printf( "%d\t" ,iCnt );                      // Print current number
        iCnt--;                                      // Decrement counter
        
    }

}   // End of DisplayPattern

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

   DisplayPattern();                                 // Function Call

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