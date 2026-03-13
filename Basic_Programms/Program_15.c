/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Multiplication function
        Inside Multiplication function:
            Perform multiplication: fAns = fNo1 * fNo2
            Return the result
        Display the result of multiplication in main
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
//  Function Name : Multiplication
//  Description :   Calculates multiplication of two float numbers
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Multiplication( float fNo1 , float fNo2 )
{

    float fAns = 0.0f;

    fAns = fNo1 * fNo2;

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

    fRetVal = Multiplication( fNumOne , fNumTwo );

    printf( "The multiplication of %f and %f is : %f.\n" ,fNumOne ,fNumTwo ,fRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 1.2         Input2 : 3.0         Output : 3.600000
//  Input1 : -2.5        Input2 : 2.0         Output : -5.000000
//  Input1 : 0.0         Input2 : 10.5        Output : 0.000000
//
/////////////////////////////////////////////////////////////////