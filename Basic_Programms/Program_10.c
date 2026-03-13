/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            If dNo1 is negative, convert it to positive (Absolute)
            If dNo2 is negative, convert it to positive (Absolute)
            Perform addition: dAns = dNo1 + dNo2
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
//  Description :   Calculates addition of two absolute doubles
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Addition( double dNo1 , double dNo2 )
{

    double dAns = 0.0;

    if( dNo1 < 0 )
    {

        dNo1 = -dNo1;

    }

    if( dNo2 < 0 )
    {

        dNo2 = -dNo2;

    }

    dAns = dNo1 + dNo2;

    return dAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    double dNumOne = 0.0;
    double dNumTwo = 0.0;
    double dRetVal = 0.0;

    printf("Enter the first number(double) : \t");
    scanf( "%lf" ,&dNumOne );

    printf("Enter the second number(double) : \t");
    scanf( "%lf" ,&dNumTwo );

    dRetVal = Addition( dNumOne , dNumTwo );

    printf( "The addition of %lf and %lf is : %lf.\n" ,dNumOne ,dNumTwo ,dRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 100.25      Input2 : 200.75      Output : 301.000000
//  Input1 : -50.5       Input2 : 10.0        Output : 60.500000
//  Input1 : -1.111      Input2 : -2.222      Output : 3.333000
//
/////////////////////////////////////////////////////////////////