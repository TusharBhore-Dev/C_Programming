/*
    Algorithm

    START
        Accept a number from the user as iNum
        Check if the number is zero, if yes, display factorial as 1
        Check if the number is negative, if yes, display an error message
        If the number is positive:
            Define a static variable iFact initialized to 1
            Check the base condition (if iNo >= 1)
            Multiply iFact by current value of iNo
            Decrement iNo and recursively call the function
        Return the final value of iFact to main
        Display the result on screen
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
//  Description :   It is used to calculate the factorial using recursion         
//  Input :         Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

int CalculateFactorialRecur( int iNo )
{

    static int iFact = 1 ;                           // Static variable to preserve value across calls

    if(  iNo >= 1  )                                 // Base condition for recursion
    {

        iFact = iFact * iNo;                         // Business Logic

        iNo--;                                       // Decrement input

        CalculateFactorialRecur( iNo );              // Recursive function call

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
//  Input : 5        Output : 120
//  Input : 3        Output : 6
//  Input : 0        Output : 1
//  Input : -5       Output : Error message
//
/////////////////////////////////////////////////////////////////