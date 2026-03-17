/*
    Algorithm

    START
        Accept number as iNum
        Check if iNum is valid (positive)
        Count total digits in the number
        Calculate sum of (each digit raised to digit count)
        If sum matches original number, it's Armstrong
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckArmstrong
//  Description :   It is used to check whether a number is Armstrong or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckArmstrong( int iNum )
{

    int iCountDigit = 0 , iTemp = 0 , iSumDigPowCount = 0;
    double dDigit = 0.0;

    iTemp = iNum;

    while( iNum != 0 )
    {

        iCountDigit++;                              // Count digits

        iNum = iNum / 10;

    } 

    iNum = iTemp;

    while( iNum != 0 )
    {

        dDigit = iNum % 10;

        dDigit = pow( dDigit , iCountDigit );       // Power calculation

        iSumDigPowCount = iSumDigPowCount + dDigit; // Summation

        iNum = iNum / 10;

    }

    return ( iTemp == iSumDigPowCount );            // Comparison

}   // End of CheckArmstrong

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it armstrong or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please provide non zero and positive value only.\n" );
        return -1;                                  // Input validation

    }

    bRet = CheckArmstrong( iNum );                  // Function call

    if( bRet == true )
    {

        printf( "The entered number %d is armstrong number.\n" ,iNum );

    }
    else
    {

        printf( "The entered number %d is not armstrong number.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 153         Output : Armstrong number
//  Input : 370         Output : Armstrong number
//  Input : 1634        Output : Armstrong number
//  Input : 123         Output : Not an Armstrong number
//  Input : -153        Output : Error message
//
/////////////////////////////////////////////////////////////////