/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (dNo2) is zero
                If yes, print error message "Undefined"
            Check if numerator (dNo1) is zero
                If yes, return 0.0
            Otherwise, perform double division: dAns = dNo1 / dNo2
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
//  Description :   Calculates double division with zero-check validation
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Division( double dNo1 , double dNo2 )
{

    if( dNo2 == 0.0 )
    {

        printf("The division by zero denominator is undefined.\n");
        return 0.0; 

    }
    else if( dNo1 == 0.0 )
    {

        return 0.0;

    }
    else
    {

        double dAns = 0.0;

        dAns = dNo1 / dNo2;

        return dAns;

    }

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

    dRetVal = Division( dNumOne , dNumTwo );

    if( dNumTwo != 0.0 )
    {

        printf( "The division of %lf and %lf is : %lf.\n" ,dNumOne ,dNumTwo ,dRetVal );

    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 22.0        Input2 : 7.0         Output : 3.142857
//  Input1 : -15.5       Input2 : 5.0         Output : -3.100000
//  Input1 : 100.0       Input2 : 0.0         Output : Undefined
//
/////////////////////////////////////////////////////////////////