/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Substraction function
        Inside Substraction function:
            If fNo1 is negative, convert it to positive (Absolute)
            If fNo2 is negative, convert it to positive (Absolute)
            Perform subtraction: fAns = fNo1 - fNo2
            Return the result
        Display the result of subtraction in main
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header Files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Substraction
//  Description :   Calculates subtraction of two absolute floats
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Substraction( float fNo1 , float fNo2 )
{

    float fAns = 0.0f;

    if( fNo1 < 0 )
    {

        fNo1 = -fNo1;

    }

    if( fNo2 < 0 )
    {

        fNo2 = -fNo2;

    }

    fAns = fNo1 - fNo2;

    return fAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    float fNumOne = 0.0f;
    float fNumTwo = 0.0f;
    float fRetVal = 0.0f;

    printf("Enter the first number(float) : \t");
    scanf( "%f" ,&fNumOne );

    printf("Enter the second number(float) : \t");
    scanf( "%f" ,&fNumTwo );

    fRetVal = Substraction( fNumOne , fNumTwo );

    printf( "The subtraction of %f and %f is : %f.\n" ,fNumOne ,fNumTwo ,fRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 20.5        Input2 : 10.2        Output : 10.300000
//  Input1 : -30.0       Input2 : 5.5         Output : 24.500000
//  Input1 : -10.0       Input2 : -15.0       Output : -5.000000
//
/////////////////////////////////////////////////////////////////