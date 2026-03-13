/*
    Algorithm

    START
        Accept an integer from the user as iNum
        Pass iNum directly into the condition of an if-else statement 
        by calling CheckEvenOROdd(iNum)
        Inside CheckEvenOROdd:
            Return the result of (iNo % 2 == 0)
        If the function returns true:
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
//  Description :   Checks if a given integer is even or odd (Minimalist)
//  Input :         Integer
//  Output :        Boolean (true/false)
//  Author :        Tushar vikas bhore
//  Date :          25/02/2026
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOROdd( int iNo )
{
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

    printf( "Enter the number to check is it odd or even :\t" );
    scanf( "%d" ,&iNum );

    // Direct function call within the conditional statement
    if( CheckEvenOROdd( iNum ) )
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
//  Input : 102         Output : Even
//  Input : -13         Output : Odd
//
/////////////////////////////////////////////////////////////////