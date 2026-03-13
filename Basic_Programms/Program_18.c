/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (fNo2) is zero
                If yes, print error message "Undefined"
            Check if numerator (fNo1) is zero
                If yes, return 0.0f
            Otherwise, perform floating point division: fAns = fNo1 / fNo2
            Return the result
        Display the result of division in main
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
//  Function Name : Division
//  Description :   Calculates float division with zero-check validation
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Division( float fNo1 , float fNo2 )
{

    if( fNo2 == 0.0f )
    {

        printf("The division by zero denominator is undefined.\n");
        return 0.0f; // Return default to satisfy return type

    }
    else if( fNo1 == 0.0f )
    {

        return 0.0f;

    }
    else
    {

        float fAns = 0.0f;

        fAns = fNo1 / fNo2;

        return fAns;

    }

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

    fRetVal = Division( fNumOne , fNumTwo );

    // Optional: Only print result if denominator was valid
    if( fNumTwo != 0.0f )
    {

        printf( "The division of %f and %f is : %f.\n" ,fNumOne ,fNumTwo ,fRetVal );

    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.0        Input2 : 4.0         Output : 2.500000
//  Input1 : 5.5         Input2 : 0.0         Output : Undefined
//  Input1 : 0.0         Input2 : 3.2         Output : 0.000000
//
/////////////////////////////////////////////////////////////////