/*
    Algorithm

    START
        Accept a number from the user as iNum
        Apply filters in main:
            If number < 0, show error
            If number == 0, show "not prime"
            If number == 1, show "neither prime nor composite"
        If number > 1, call CheckPrime:
            Iterate iCnt from 2 up to (iNo - 1)
            If iNo is divisible by iCnt, return false immediately
            If the loop completes without finding a factor, return true
        Display result based on the boolean return value
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
//  Function Name : CheckPrime
//  Description :   It is used to check whether a number is prime or not         
//  Input :         Integer
//  Output :        Boolean (bool)
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckPrime( int iNo )
{

    int iCnt = 0;                                    // Loop counter

    for( iCnt = 2; iCnt < iNo; iCnt++ )              // Iterate to find factors
    {

        if( iNo % iCnt == 0 )                        // Check divisibility
        {

            return false;                            // Factor found, not prime
            break;                                   // Unreachable code
        
        }
        
    }
    
    return true;                                     // No factors found, it is prime

}   // End of CheckPrime

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
    else if( iNum == 0 )                             // Filter for 0
    {

        printf( "The Zero is not prime.\n" );
        return -1;

    }
    else if( iNum == 1 )                             // Filter for 1
    {

        printf( "The number one is nor prime nor composite.\n" );
        return -1;

    }

    bRet = CheckPrime( iNum );                       // Function Call

    if( bRet == true )                               // Result check
    {

        printf( "The number is prime.\n" );

    }
    else
    {

        printf( "The number is not prime.\n" );

    }

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 7        Output : The number is prime.
//  Input : 9        Output : The number is not prime.
//  Input : 2        Output : The number is prime.
//  Input : 1        Output : The number one is nor...
//
/////////////////////////////////////////////////////////////////