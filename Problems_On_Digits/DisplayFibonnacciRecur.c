/*
    Algorithm

    START
        Accept limit as iLim
        Use static variables to maintain state across recursive calls
        If current count is less than or equal to iLim:
            Print the current Fibonacci term
            Calculate the next term by adding current terms
            Increment the count
            Call the function recursively with the same limit
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFibonnacciRecur
//  Description :   It is used to display Fibonacci series using recursion         
//  Input :         Integer 
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayFibonnacciRecur( int iLim )
{

    static int iRes = 0 , iFirst = 0 ,iNext = 1 , iCnt = 1;
 
    if(  iCnt <= iLim )                             // Base condition
    {

        printf( "%d\t" ,iFirst );                   // Display term
        
        iRes = iFirst + iNext;                      // Logic for next term
        iFirst = iNext;
        iNext = iRes;

        iCnt++;                                     // Update static counter

        DisplayFibonnacciRecur( iLim );             // Recursive call

    }

}   // End of DisplayFibonnacciRecur

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iLimit = 0;

    printf( "Enter the limit upto how much elements of fibonnacci series you want :\t" );
    scanf( "%d" ,&iLimit );

    if( iLimit <= 0 )
    {

        printf( "Error : Please provide non zero positive limit only.\n" );

        return -1;                                  // Validation check

    }

    printf( "The elements of the fibonnacci series are as follow : \n\n" );

    DisplayFibonnacciRecur( iLimit );               // Initial call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6           Output : 0  1   1   2   3   5
//  Input : 3           Output : 0  1   1
//  Input : 0           Output : Error message
//
/////////////////////////////////////////////////////////////////