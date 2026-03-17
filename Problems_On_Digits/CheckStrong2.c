/*
    Algorithm

    START
        Accept number as iNum
        Initialize a lookup table for factorials of digits 0-9
        Extract each digit from the number
        Fetch the factorial from the table and add it to sum
        Compare the total sum with the original number
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

    int iSumOfFactOfDigit = 0 , iTemp = 0 , iDigit = 0;
    iTemp = iNum;

    // Lookup table for factorials                                              
    int FactArr[10] = { 1 , 1 , 2 , 6 , 24 , 120 , 720 , 5040 , 40320 , 362880 };

    while( iNum != 0 )
    {

        iDigit = iNum % 10;

        iSumOfFactOfDigit = iSumOfFactOfDigit + FactArr[iDigit]; // Array lookup

        iNum = iNum / 10;

    }

    return ( iTemp == iSumOfFactOfDigit );          // Comparison logic


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

    printf( "Enter the number to check is it string or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please enter the non zero and positive number only.\n" );

        return -1;                                  // Input validation

    }

    bRet = CheckStrong( iNum );                     // Method call

    if( bRet == true )
    {

        printf( "The entered number %d is strong number.\n",iNum );

    }
    else
    {

        printf( "The entered number %d is not strong number.\n",iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 145         Output : Strong number
//  Input : 40585       Output : Strong number
//  Input : 123         Output : Not a Strong number
//
/////////////////////////////////////////////////////////////////