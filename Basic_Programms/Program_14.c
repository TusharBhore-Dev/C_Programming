/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Multiplication function
        Inside Multiplication function:
            Perform multiplication: dAns = dNo1 * dNo2
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
//  Description :   Calculates multiplication of two double numbers
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Multiplication( double dNo1 , double dNo2 )
{

    double dAns = 0.0;

    dAns = dNo1 * dNo2;

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

    dRetVal = Multiplication( dNumOne , dNumTwo );

    printf( "The multiplication of %lf and %lf is : %lf.\n" ,dNumOne ,dNumTwo ,dRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.5        Input2 : 2.0         Output : 21.000000
//  Input1 : -5.0        Input2 : 4.0         Output : -20.000000
//  Input1 : 0.25        Input2 : 0.5         Output : 0.125000
//
/////////////////////////////////////////////////////////////////