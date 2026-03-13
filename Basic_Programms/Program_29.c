/*
    Algorithm

    START
        Accept a number from the user as iNum
        Check if the number is zero, if yes, display factorial as 1
        Check if the number is negative, if yes, display an error message
        If the number is positive:
            Define a static variable iFact to persist value across recursive calls
            Check if the current number is greater than or equal to 1
            Multiply iFact by current value of iNo
            Perform a recursive call by decrementing iNo using prefix operator
        Return the final value of iFact to main
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
//  Function Name : CalculateFactorialRecur
//  Description :   It is used to calculate the factorial using recursion and prefix decrement         
//  Input :         Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

int CalculateFactorialRecur( int iNo )
{

    static int iFact = 1 ;                           // To preserve result across recursive calls

    if(  iNo >= 1  )                                 // Base condition
    {

        iFact = iFact * iNo;                         // Business Logic

        CalculateFactorialRecur( --iNo );            // Recursive call with prefix decrement

    }

    return iFact;

}   // End of CalculateFactorialRecur

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

        iRet = CalculateFactorialRecur( iNum );      // Function Call

        printf( "The factorial of %d is : %d.\n" ,iNum ,iRet );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 4        Output : 24
//  Input : 5        Output : 120
//  Input : 0        Output : 1
//  Input : -1       Output : Error message
//
/////////////////////////////////////////////////////////////////