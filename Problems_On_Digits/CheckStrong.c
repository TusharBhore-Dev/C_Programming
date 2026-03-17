/*
    Algorithm

    START
        Accept number as iNum
        Extract each digit from the number
        Calculate factorial of each extracted digit
        Sum the factorials of all digits
        Compare the sum with original iNum
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
//  Function Name : CheckStrong
//  Description :   It is used to check whether a number is Strong or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckStrong( int iNum )
{

    int iFact = 1 , iDigit = 0 , iTemp = 0 , iSumOfFactOfDig = 0;

    iTemp = iNum;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;

        iFact = 1;
        while(  iDigit >= 1  )                      // Factorial calculation
        {

            iFact = iFact * iDigit;
            iDigit--;
        }

        iSumOfFactOfDig = iSumOfFactOfDig + iFact;  // Sum of factorials

        iNum = iNum / 10;

    }

    return ( iTemp == iSumOfFactOfDig );            // Final comparison

}   // End of CheckStrong

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it strong number or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "\nError : Please provide non zero positive values only.\n" );
        return -1;                                  // Validation check

    }

    bRet = CheckStrong( iNum );                     // Function call

    if( bRet == true )
    {

        printf( "The number %d is strong number.\n" ,iNum );

    }
    else
    {

        printf( "The number %d is not strong number.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 145         Output : Strong (1! + 4! + 5! = 145)
//  Input : 2           Output : Strong (2! = 2)
//  Input : 123         Output : Not a Strong number
//
/////////////////////////////////////////////////////////////////