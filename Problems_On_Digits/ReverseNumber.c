/*
    Algorithm

    START
        Accept number as iNum
        Initialize iRevNum to 0
        Iterate until iNum becomes zero
        Extract the last digit of iNum using modulo 10
        Update iRevNum by multiplying it by 10 and adding the extracted digit
        Divide iNum by 10 to remove the processed digit
        Return the final reversed number iRevNum
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
//  Function Name : ReverseNumber
//  Description :   It is used to reverse the digits of a given number         
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

int ReverseNumber( int iNum )
{

    int iRevNum = 0 , iDigit = 0;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract last digit

        iRevNum = iRevNum * 10 + iDigit;            // Shift and add digit

        iNum = iNum / 10;                           // Reduce original number

    }

    return iRevNum;

}   // End of ReverseNumber

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRevNum = 0;

    printf( "Enter the number to reverse the number :\t" );
    scanf( "%d" ,&iNumber );

    if( iNumber <= 0 )
    {

        printf( "Error : Please enter the positive and non zero number.\n" );
        return -1;                                  // Input validation

    }

    iRevNum = ReverseNumber( iNumber );             // Function call

    printf( "The entered number is : %d.\n" ,iNumber );
    printf( "The reversed number is : %d.\n" ,iRevNum );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 123         Output : 321
//  Input : 100         Output : 1 (Trailing zeros are removed)
//  Input : 4567        Output : 7654
//
/////////////////////////////////////////////////////////////////