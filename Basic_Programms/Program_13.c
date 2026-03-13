/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Substraction function
        Inside Substraction function:
            If dNo1 is negative, convert it to positive (Absolute)
            If dNo2 is negative, convert it to positive (Absolute)
            Perform subtraction: dAns = dNo1 - dNo2
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
//  Description :   Calculates subtraction of two absolute doubles
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Substraction( double dNo1 , double dNo2 )
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

    dAns = dNo1 - dNo2;

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

    dRetVal = Substraction( dNumOne , dNumTwo );

    printf( "The substraction of %lf and %lf is : %lf.\n" ,dNumOne ,dNumTwo ,dRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 500.50      Input2 : 100.25      Output : 400.250000
//  Input1 : -200.0      Input2 : 50.0        Output : 150.000000
//  Input1 : -10.5       Input2 : -20.5       Output : -10.000000
//
/////////////////////////////////////////////////////////////////