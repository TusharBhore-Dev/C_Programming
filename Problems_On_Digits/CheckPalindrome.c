/*
    Algorithm

    START
        Accept number as iNum
        Reverse the digits of iNum
        Compare reversed number with original iNum
        If they match, it is a Palindrome
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
//  Function Name : CheckPalindrome
//  Description :   It is used to check whether a number is Palindrome or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckPalindrome( int iNum )
{

    int iRevNum = 0 , iDigit = 0 , iTemp = 0;

    iTemp = iNum;                                   // Preserve original input

    while( iNum != 0 )
    {

        iDigit = iNum % 10 ;

        iRevNum = iRevNum * 10 + iDigit;            // Build reversed number

        iNum = iNum / 10;

    }

    return( iTemp == iRevNum );                     // Compare result

}   // End of CheckPalindrome

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0 ;
    bool bRet = false;

    printf( "Enter the number to check it is palindrome or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please enter the nonzero and positive number only.\n" );

        return -1;                                  // Input validation

    }

    bRet = CheckPalindrome( iNum );                 // Function call

    if( bRet == true )
    {

        printf( "The number %d is palindrome.\n" ,iNum );

    }
    else
    {

        printf( "The number %d is not palindrome.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 121         Output : Palindrome
//  Input : 12321       Output : Palindrome
//  Input : 123         Output : Not a Palindrome
//
/////////////////////////////////////////////////////////////////