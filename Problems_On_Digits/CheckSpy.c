/*
    Algorithm

    START
        Accept number as iNum
        Initialize sum to 0 and product to 1
        Extract each digit from the number
        Add the digit to sum and multiply it with product
        If sum equals product, it is a Spy number
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
//  Function Name : CheckSpy
//  Description :   It is used to check whether a number is Spy or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckSpy( int iNum )
{

    int iDigit = 0 , iSumOfDigits = 0, iProductOfDigits = 0;
    iProductOfDigits = 1;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract digit

        iSumOfDigits = iSumOfDigits + iDigit;       // Calculate sum
        iProductOfDigits = iProductOfDigits * iDigit; // Calculate product

        iNum = iNum / 10;

    }

    return( iSumOfDigits == iProductOfDigits );     // Comparison logic

}   // End of CheckSpy

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please provide non zero and positive values only.\n" );

        return -1;                                  // Validation check

    }

    bRet = CheckSpy( iNum );                        // Method call

    if( bRet == true )
    {

        printf( "The entered number %d is a spy number.\n" ,iNum );

    }
    else
    {

        printf( "The entered number %d is not a spy number.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 1124        Output : Spy (1+1+2+4 = 8, 1*1*2*4 = 8)
//  Input : 123         Output : Spy (1+2+3 = 6, 1*2*3 = 6)
//  Input : 124         Output : Not a Spy (1+2+4 = 7, 1*2*4 = 8)
//
/////////////////////////////////////////////////////////////////