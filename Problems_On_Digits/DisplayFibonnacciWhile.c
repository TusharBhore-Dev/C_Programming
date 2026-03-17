/*
    Algorithm

    START
        Accept limit as iLim
        Initialize first term to 0, next to 1, and counter to 1
        While counter is less than or equal to iLim:
            Print the current first term
            Calculate sum of first and next terms
            Update first to next and next to the sum
            Increment the counter
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
//  Function Name : DisplayFibonnacciWhile
//  Description :   It is used to display Fibonacci series using a while loop         
//  Input :         Integer 
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayFibonnacciWhile( int iLim )
{

    int iRes = 0 , iFirst = 0 ,iNext = 1 , iCnt = 0;
 
    printf( "The elements of the fibonnacci series are as follow : \n\n" );

    iCnt = 1;
    while(  iCnt <= iLim )
    {

        printf( "%d\t" ,iFirst );                   // Display current value
        
        iRes = iFirst + iNext;                      // Generate next term
        iFirst = iNext;                             // Swap values
        iNext = iRes;

        iCnt++;                                     // Increment loop counter

    }

}   // End of DisplayFibonnacciWhile

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

        return -1;                                  // Input validation

    }

    DisplayFibonnacciWhile( iLimit );               // Function call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 4           Output : 0  1   1   2
//  Input : 7           Output : 0  1   1   2   3   5   8
//  Input : -5          Output : Error message
//
/////////////////////////////////////////////////////////////////