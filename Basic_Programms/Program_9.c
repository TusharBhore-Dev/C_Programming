/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            If fNo1 is negative, convert it to positive (Absolute)
            If fNo2 is negative, convert it to positive (Absolute)
            Perform addition: fAns = fNo1 + fNo2
            Return the result
        Display the result of addition in main
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
//  Function Name : Addition
//  Description :   Calculates addition of two absolute floats
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Addition( float fNo1 , float fNo2 )
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

    fAns = fNo1 + fNo2;

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

    fRetVal = Addition( fNumOne , fNumTwo );

    printf( "The addition of %f and %f is : %f.\n" ,fNumOne ,fNumTwo ,fRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.5        Input2 : 20.2        Output : 30.700001
//  Input1 : -5.0        Input2 : 4.5         Output : 9.500000
//  Input1 : -1.2        Input2 : -1.2        Output : 2.400000
//
/////////////////////////////////////////////////////////////////