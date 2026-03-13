/*
    Algorithm

    START
        Accept a number from the user as iNum
        Apply filters in main for negative, zero, and one
        If number is greater than one:
            Define a static variable iCnt initialized to 2
            Check the base condition (if iCnt <= iNo / 2)
            Check if iNo is divisible by iCnt
            If divisible, return false
            Otherwise, increment iCnt and return the result of recursive call
        If recursion completes without finding a factor, return true
        Display result based on boolean return value
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrimeRecursive
//  Description :   It is used to check whether a number is prime using recursion         
//  Input :         Integer
//  Output :        Boolean (bool)
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckPrimeRecursive( int iNo )
{

    static int iCnt = 2;                             // Static variable to preserve counter across calls

    if( iCnt <= ( iNo / 2 ) )                        // Recursive base condition
    {

        if( iNo % iCnt == 0 )                        // Business Logic: Check divisibility
        {

            return false;                            // Factor found, not prime
        
        }

        iCnt++;                                      // Increment counter

        return CheckPrimeRecursive( iNo );           // Corrected: Returning the recursive call result

    }

    return true;                                     // No factors found
    
}   // End of CheckPrimeRecursive

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;                                    // To store user input
    bool bRet = false;                               // To store result

    printf( "Enter the number :\t" );
    scanf( "%d" ,&iNum );

    if( iNum < 0 )                                   // Input Validator
    {

        printf( "Error : Please enter the positive numbers only.\n" );
        return -1;

    }
    else if( iNum == 0 )                             // Filter for zero
    {

        printf( "The Zero is not prime.\n" );
        return -1;

    }
    else if( iNum == 1 )                             // Filter for one
    {

        printf( "The number one is nor prime nor composite.\n" );
        return -1;

    }

    bRet = CheckPrimeRecursive( iNum );              // Function Call

    if( bRet == true )                               // Result check
    {

        printf( "The number is prime.\n" );

    }
    else
    {

        printf( "The number is not prime.\n" );

    }

    return 0;                                        // Added standard return

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 11       Output : The number is prime.
//  Input : 15       Output : The number is not prime.
//  Input : 2        Output : The number is prime.
//  Input : 1        Output : The number one is nor...
//
/////////////////////////////////////////////////////////////////