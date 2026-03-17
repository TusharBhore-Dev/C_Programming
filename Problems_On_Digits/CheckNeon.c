/*
    Algorithm

    START
        Accept number as iNum
        Calculate square of iNum
        Calculate sum of digits of the square
        Compare sum with original iNum
        If they are equal, it is a Neon number
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
//  Function Name : CheckNeon
//  Description :   It is used to check whether a number is Neon or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckNeon( int iNum )
{

    int iNumSqr = 0 , iSumOfDigitsOfSqre = 0 , iDigit = 0;

    iNumSqr = iNum * iNum;                          // Calculate square

    while( iNumSqr != 0 )
    {

        iDigit = iNumSqr % 10;                      // Extract digit from square

        iSumOfDigitsOfSqre = iSumOfDigitsOfSqre + iDigit;

        iNumSqr = iNumSqr / 10;

    }

    return ( iNum == iSumOfDigitsOfSqre );          // Compare sum with original

}   // End of CheckNeon

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

    if( iNum < 0 )
    {

        printf( "Error : Please provide the positive numbers only.\n" );

        return -1;                                  // Filter negative input

    }

    bRet = CheckNeon( iNum );                       // Function call

    if( bRet == true )
    {

        printf( "The number %d is the neon number.\n",iNum );

    }
    else
    {

        printf( "The number %d is not neon number.\n",iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 9           Output : Neon number (9*9=81, 8+1=9)
//  Input : 1           Output : Neon number (1*1=1, 1=1)
//  Input : 0           Output : Neon number (0*0=0, 0=0)
//  Input : 12          Output : Not neon number (12*12=144, 1+4+4=9 != 12)
//
/////////////////////////////////////////////////////////////////