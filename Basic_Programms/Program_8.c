/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            Check if iNo1 is negative, if so, convert to positive
            Check if iNo2 is negative, if so, convert to positive
            Perform addition: iAns = iNo1 + iNo2
            Return the value of iAns
        Display the result (iRetVal) in main
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
//  Function Name : Addition
//  Description :   Calculates addition of two absolute integers
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Addition( int iNo1 , int iNo2 )
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

    iAns = iNo1 + iNo2;

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

    iRetVal = Addition( iNumOne , iNumTwo );

    printf( "The addition of %d and %d is : %d.\n" ,iNumOne ,iNumTwo ,iRetVal );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10          Input2 : 20          Output : 30
//  Input1 : -10         Input2 : 20          Output : 30
//  Input1 : -10         Input2 : -20         Output : 30
//
/////////////////////////////////////////////////////////////////