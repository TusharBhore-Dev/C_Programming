/*
    Algorithm

    START
        Accept an integer from the user as iNum
        Pass iNum to the function CheckEvenOROdd
        Inside CheckEvenOROdd:
            Evaluate the expression (iNo % 2 == 0)
            Return the result of this evaluation (true/false) directly
        Receive the result in bRet
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
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOROdd
//  Description :   Checks if a given integer is even or odd (Optimized)
//  Input :         Integer
//  Output :        Boolean (true/false)
//  Author :        Tushar vikas bhore
//  Date :          25/02/2026
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOROdd( int iNo )
{
    // Directly returning the boolean result of the comparison
    return (iNo % 2 == 0);
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
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
//  Testcases:
//  Input : 44          Output : Even
//  Input : 7           Output : Odd
//
/////////////////////////////////////////////////////////////////