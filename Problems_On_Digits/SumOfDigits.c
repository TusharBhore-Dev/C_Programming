/*
    Algorithm

    START
        Accept number as iNumber
        Initialize iSum to 0
        Iterate until iNumber becomes zero
        Extract the last digit using modulo 10
        Add the extracted digit to iSum
        Divide iNumber by 10 to move to the next digit
        Return the final sum iSum
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
//  Function Name : SumOfDigits
//  Description :   It is used to calculate the sum of all digits in a number         
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

int SumOfDigits( int iNumber )
{

    int iDigit = 0 , iSum = 0;

    while( iNumber != 0 )
    {

        iDigit = iNumber % 10;                      // Extract last digit

        iSum = iSum + iDigit;                       // Accumulate sum

        iNumber = iNumber / 10;                     // Reduce number

    }

    return iSum;

}   // End of SumOfDigits

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0 , iRet = 0;

    printf( "Enter the number to get the sum of digits :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please enter the non zero positive number only.\n" );
        return -1;                                  // Input validation

    }

    iRet = SumOfDigits( iNum );                     // Function call

    printf( "\nThe sum of the digits of the number %d is : %d.\n" ,iNum ,iRet );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 123         Output : 6 (1+2+3)
//  Input : 99          Output : 18 (9+9)
//  Input : 1001        Output : 2 (1+0+0+1)
//
/////////////////////////////////////////////////////////////////