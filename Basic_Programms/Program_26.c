/*
    Algorithm

    START
        Accept a number from the user as iNum
        Check if the number is zero, if yes, display factorial as 1
        Check if the number is negative, if yes, display an error message
        If the number is positive:
            Initialize iFact to 1
            Iterate using a while loop as long as iNo is greater than or equal to 1
            Multiply iFact by current value of iNo
            Decrement iNo by 1 in each iteration
        Display the final product iFact as the factorial
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
//  Description :   It is used to calculate the factorial by decrementing input         
//  Input :         Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

int CalculateFactorial( int iNo )
{

    int iFact = 1 ;                                  // To store result

    while(  iNo >= 1  )                              // Loop to iterate backwards to 1
    {

        iFact = iFact * iNo;                         // Business Logic
        iNo--;                                       // Decrement the input number

    }

    return iFact;

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

        printf( "The factorial of %d is : %d.\n" ,iNum ,iRet );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 3        Output : 6
//  Input : 5        Output : 120
//  Input : 0        Output : 1
//  Input : -10      Output : Error message
//
/////////////////////////////////////////////////////////////////