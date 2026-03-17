/*
    Algorithm

    START
        Accept number as iNum
        Initialize iMinDigit to 9 (highest possible digit)
        Iterate until iNum becomes zero
        Extract the last digit using modulo 10
        Compare extracted digit with iMinDigit
        If extracted digit is smaller, update iMinDigit
        Divide iNum by 10 to move to the next digit
        Return iMinDigit
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
//  Function Name : FindMinDigit
//  Description :   It is used to find the smallest digit in a given number         
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          17/03/2026
//
/////////////////////////////////////////////////////////////////

int FindMinDigit( int iNum )
{

    int iMinDigit = 9 , iDigit = 0;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract digit

        if( iDigit < iMinDigit )                    // Compare with current min
        {

            iMinDigit = iDigit;                     // Update min

        }

        iNum = iNum / 10;                           // Move to next digit

    }

    return iMinDigit;

}   // End of FindMinDigit

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

    iRet = FindMinDigit( iNumber );                 // Function call

    printf("The smallest digit in the number %d is : %d.\n " ,iNumber ,iRet );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12758       Output : 1
//  Input : 942         Output : 2
//  Input : 555         Output : 5
//
/////////////////////////////////////////////////////////////////