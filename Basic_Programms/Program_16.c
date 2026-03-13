/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Multiplication function
        Inside Multiplication function:
            Perform multiplication: iAns = iNo1 * iNo2
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
//  Description :   Calculates multiplication of two integers
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Multiplication( int iNo1 , int iNo2 )
{

    int iAns = 0;

    iAns = iNo1 * iNo2;

    return iAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumOne = 0;
    int iNumTwo = 0;
    int iRetVal = 0;

    printf("Enter the first number : \t");
    scanf( "%d" ,&iNumOne );

    printf("Enter the second number : \t");
    scanf( "%d" ,&iNumTwo );

    iRetVal = Multiplication( iNumOne , iNumTwo );

    printf( "The multiplication of %d and %d is : %d.\n" ,iNumOne ,iNumTwo ,iRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10          Input2 : 5           Output : 50
//  Input1 : -4          Input2 : 8           Output : -32
//  Input1 : 0           Input2 : 100         Output : 0
//
/////////////////////////////////////////////////////////////////