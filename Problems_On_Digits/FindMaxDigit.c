/*
    Algorithm

    START
        Accept number as iNum
        Initialize iMaxDigit to 0
        Iterate until iNum becomes zero
        Extract the last digit using modulo 10
        Compare extracted digit with iMaxDigit
        If extracted digit is greater, update iMaxDigit
        Divide iNum by 10 to move to the next digit
        Return iMaxDigit
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
//  Function Name : FindMaxDigit
//  Description :   It is used to find the largest digit in a given number         
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

int FindMaxDigit( int iNum )
{

    int iMaxDigit = 0 , iDigit = 0;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract digit

        if( iDigit > iMaxDigit )                    // Compare with current max
        {

            iMaxDigit = iDigit;                     // Update max

        }

        iNum = iNum / 10;                           // Move to next digit

    }

    return iMaxDigit;

}   // End of FindMaxDigit

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRet = 0 ;

    printf( "Enter the number :\t" );
    scanf( "%d" ,&iNumber );

    if( iNumber <= 0 )
    {

        printf( "Error : Please enter the non zero and positive value only.\n" );
        return -1;                                  // Validation check

    } 

    iRet = FindMaxDigit( iNumber );                 // Function call

    printf("The largest digit in the number %d is : %d.\n " ,iNumber ,iRet );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12758       Output : 8
//  Input : 912         Output : 9
//  Input : 444         Output : 4
//
/////////////////////////////////////////////////////////////////