/*
    Algorithm

    START
        Accept an integer from the user as iNum
        Pass iNum to the function CheckEvenOROdd
        Inside CheckEvenOROdd:
            Calculate the remainder of the number divided by 2 (iNo % 2)
            If the remainder is 0:
                Return true (It is Even)
            Else:
                Return false (It is Odd)
        Receive the boolean result in bRet
        If bRet is true:
            Display "Even"
        Else:
            Display "Odd"
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header Files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h> // Required for bool data type in C

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOROdd
//  Description :   Checks if a given integer is even or odd
//  Input :         Integer
//  Output :        Boolean (true/false)
//  Author :        Tushar vikas bhore
//  Date :          25/02/2026
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOROdd( int iNo )
{
    // Using Modulo operator to find remainder
    if( iNo % 2 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it odd or even :\t" );
    scanf( "%d" ,&iNum );

    bRet = CheckEvenOROdd( iNum );

    if( bRet == true )
    {
        printf( "\nThe entered number is %d and the number is even.\n" ,iNum );
    }
    else
    {
        printf( "\nThe entered number is %d and the number is odd.\n" ,iNum );
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10          Output : Even
//  Input : 11          Output : Odd
//  Input : -4          Output : Even
//  Input : 0           Output : Even
//
/////////////////////////////////////////////////////////////////