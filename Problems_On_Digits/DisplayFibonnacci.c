/*
    Algorithm

    START
        Accept limit as iLim
        Initialize first term as 0 and next term as 1
        Iterate from 1 up to iLim
        Print the current first term
        Calculate the next term by adding first and next
        Update first term to next and next term to the calculated result
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
//  Function Name : DisplayFibonnacci
//  Description :   It is used to display Fibonacci series up to a given limit         
//  Input :         Integer 
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayFibonnacci( int iLim )
{

    int iRes = 0 , iFirst = 0 ,iNext = 1 , iCnt = 0;
 
    printf( "The elements of the fibonnacci series are as follow : \n\n" );

    for( iCnt = 1; iCnt <= iLim; iCnt++ )
    {

        printf( "%d\t" ,iFirst );                   // Display current term
        
        iRes = iFirst + iNext;                      // Sum of previous two
        iFirst = iNext;                             // Shift terms
        iNext = iRes;                               // Update next term

    }

}   // End of DisplayFibonnacci

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

    DisplayFibonnacci( iLimit );                    // Method call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5           Output : 0  1   1   2   3
//  Input : 8           Output : 0  1   1   2   3   5   8   13
//  Input : 1           Output : 0
//
/////////////////////////////////////////////////////////////////