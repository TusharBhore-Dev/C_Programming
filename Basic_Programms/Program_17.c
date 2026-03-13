/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (iNo2) is zero
                If yes, print error message (Undefined)
            Check if numerator (iNo1) is zero
                If yes, return 0
            Otherwise, perform integer division (iNo1 / iNo2)
            Return the result
        Display the result of division in main
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
//  Function Name : Division
//  Description :   Calculates integer division with zero-check validation
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Division( int iNo1 , int iNo2 )
{

    if( iNo2 == 0 )
    {

        printf("The division by zero denominator is undefined.\n");
        return 0; // Returning 0 as a default, though logic usually stops here

    }
    else if( iNo1 == 0 )
    {

        return 0;

    }
    else
    {

        int iAns = 0;

        iAns = iNo1 / iNo2;

        return iAns;

    }

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

    iRetVal = Division( iNumOne , iNumTwo );

    // Display result only if divisor was not zero to keep output clean
    if( iNumTwo != 0 )
    {

        printf( "The division of %d and %d is : %d.\n" ,iNumOne ,iNumTwo ,iRetVal );

    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10          Input2 : 2           Output : 5
//  Input1 : 11          Input2 : 3           Output : 3 (Integer floor)
//  Input1 : 10          Input2 : 0           Output : Undefined
//
/////////////////////////////////////////////////////////////////