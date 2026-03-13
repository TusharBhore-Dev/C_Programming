/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Substraction function
        Inside Substraction function:
            If iNo1 is negative, convert it to positive
            If iNo2 is negative, convert it to positive
            Perform subtraction: iAns = iNo1 - iNo2
            Return the result
        Display the result of subtraction in main
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
//  Function Name : Substraction
//  Description :   Calculates subtraction of two absolute integers
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Substraction( int iNo1 , int iNo2 )
{

    if( iNo1 < 0 )
    {

        iNo1 = -iNo1;

    }

    if( iNo2 < 0 )
    {

        iNo2 = -iNo2;

    }

    int iAns = 0;

    iAns = iNo1 - iNo2;

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

    iRetVal = Substraction( iNumOne , iNumTwo );

    printf( "The substraction of %d and %d is : %d.\n" ,iNumOne ,iNumTwo ,iRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 50          Input2 : 20          Output : 30
//  Input1 : -40         Input2 : 10          Output : 30 (Absolute)
//  Input1 : 10          Input2 : 60          Output : -50
//
/////////////////////////////////////////////////////////////////