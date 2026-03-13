/*
    Algorithm

    START
        Accept a number from the user as iNum
        Check if the number is zero, if yes, display factorial as 1
        Check if the number is negative, if yes, display an error message
        If the number is positive:
            Initialize double variable dFact to 1.0
            Iterate using a while loop as long as iNo is greater than or equal to 1
            Multiply dFact by current value of iNo with typecasting
            Decrement iNo by 1 in each iteration
        Display the final product dFact as the factorial
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateFactorial
//  Description :   It is used to calculate the factorial using double for large values         
//  Input :         Integer
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

double CalculateFactorial( int iNo )
{

    double dFact = 1.0 ;                             // To store result in double

    while(  iNo >= 1  )                              // Loop to iterate backwards
    {

        dFact = (double) dFact * iNo;                // Business Logic with typecasting
        iNo--;                                       // Decrement the input number

    }

    return dFact;

}   // End of CalculateFactorial

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0 , iRet = 0;                         // To accept user input

    printf( "Enter the number to get it's factorial :\t" );
    scanf( "%d" ,&iNum );

    if( iNum == 0 )                                  // Filter for zero
    {

        printf( "The factorial of %d is 1.\n" ,iNum );

    } 
    else if( iNum < 0 )                              // Input Validator
    {

        printf( "Error : Please enter the positive number only.\n" );

    }
    else
    {

        iRet = CalculateFactorial( iNum );           // Function Call

        printf( "The factorial of %d is : %ld.\n" ,iNum ,iRet );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5        Output : 120
//  Input : 12       Output : 479001600
//  Input : 0        Output : 1
//  Input : -1       Output : Error message
//
/////////////////////////////////////////////////////////////////