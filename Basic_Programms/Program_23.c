/*
    Algorithm

    START
        Accept three integers from the user: iNum1, iNum2, iNum3
        Check if any two numbers or all three are equal using logical OR (||)
            If equal, display an error message and exit
        If numbers are unique, pass them to CheckGreater function
        Inside CheckGreater:
            Use logical AND (&&) to check if iNo1 > iNo2 AND iNo1 > iNo3
            Use logical AND (&&) to check if iNo2 > iNo1 AND iNo2 > iNo3
            If neither, then iNo3 must be the greatest
        Display the greatest number
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
//  Function Name : CheckGreater
//  Description :   Finds and prints the greatest of three distinct integers
//  Input :         Integer, Integer, Integer
//  Output :        None (Void)
//  Author :        Tushar vikas bhore
//  Date :          25/02/2026
//
/////////////////////////////////////////////////////////////////

void CheckGreater( int iNo1 , int iNo2 , int iNo3 )
{
    // Using Logical AND to ensure a number is greater than BOTH others
    if( iNo1 > iNo2 && iNo1 > iNo3 )
    {
        printf("\nThe %d is greater.\n", iNo1);
    }
    else if( iNo2 > iNo1 && iNo2 > iNo3 )
    {
        printf("\nThe %d is greater.\n", iNo2);
    }
    else
    {
        printf("\nThe %d is greater.\n", iNo3);
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iNum1 = 0, iNum2 = 0, iNum3 = 0;
    
    printf("Enter the first number :\t");
    scanf( "%d" ,&iNum1 );

    printf("Enter the second number :\t");
    scanf( "%d" ,&iNum2 );

    printf("Enter the third number :\t");
    scanf( "%d" ,&iNum3 );

    // Validation logic to ensure distinct numbers
    if( ( iNum1 == iNum2 ) || ( iNum2 == iNum3 ) || ( iNum1 == iNum3 ) )
    {
        printf("\nError : Don't enter the equal numbers.\n");
        return -1; // Returning non-zero to indicate failure
    }
    else
    {
        CheckGreater( iNum1 , iNum2 , iNum3 );
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//  Input : 10, 20, 30    Output : 30 is greater
//  Input : 50, 10, 5     Output : 50 is greater
//  Input : 10, 10, 5     Output : Error: Don't enter equal numbers
//
/////////////////////////////////////////////////////////////////