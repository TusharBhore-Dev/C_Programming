/*
    Algorithm

    START
        Accept number as iNum
        Calculate sum of all digits of iNum
        Divide original iNum by the sum of digits
        If remainder is 0, it is a Harshad number
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
//  Function Name : CheckHarshad
//  Description :   It is used to check whether a number is Harshad or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckHarshad( int iNum )
{

    int iSumofDigits = 0 , iDigit = 0 , iTemp = 0;

    iTemp = iNum;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract digit

        iSumofDigits = iSumofDigits + iDigit;       // Accumulate sum

        iNum = iNum / 10;

    } 

    return( iTemp % iSumofDigits == 0 );            // Check divisibility

}   // End of CheckHarshad

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it harshad(niven) number or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please enter the non zero and positive number only.\n" );
        return -1;                                  // Input validation

    }

    bRet = CheckHarshad( iNum );                    // Function call

    if( bRet == true )
    {

        printf( "The entered number %d is harshad (Niven) number.\n" ,iNum );

    }
    else
    {

        printf( "The entered number %d is not harshad (Niven) number.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 18          Output : Harshad (1+8=9, 18/9=2)
//  Input : 21          Output : Harshad (2+1=3, 21/3=7)
//  Input : 15          Output : Not Harshad (1+5=6, 15/6!=0)
//
/////////////////////////////////////////////////////////////////