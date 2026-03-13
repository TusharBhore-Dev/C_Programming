/*
    Algorithm

    START
        Accept a number from the user as iNum
        Check if the number is zero, if yes, display factorial as 1
        Check if the number is negative, if yes, display an error message
        If the number is positive:
            Initialize counter iCnt to 1 and result iFact to 1
            Iterate using a while loop until iCnt is less than or equal to iNo
            Multiply iFact by iCnt and increment iCnt in each iteration
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
//  Description :   It is used to calculate the factorial using while loop         
//  Input :         Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          04/03/2026
//
/////////////////////////////////////////////////////////////////

int CalculateFactorial( int iNo )
{

    int iFact = 1 , iCnt = 0;                        // To store result and counter

    iCnt = 1;                                        // Initialization of counter
    
    while(  iCnt <= iNo  )                           // Loop to iterate till input number
    {

        iFact = iFact * iCnt;                        // Business Logic
        iCnt++;                                      // Increment counter

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
//  Input : 4        Output : 24
//  Input : 0        Output : 1
//  Input : -2       Output : Error message
//  Input : 6        Output : 720
//
/////////////////////////////////////////////////////////////////