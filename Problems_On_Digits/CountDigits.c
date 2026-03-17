/*
    Algorithm

    START
        Accept number as iNum
        Initialize counter to zero
        Extract each digit from the number until it becomes zero
        Increment the counter for every extraction
        Return the final count to the user
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
//  Function Name : CountDigit
//  Description :   It is used to count the total digits in a number         
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

int CountDigit( int iNum )
{

    int iCount = 0 , iDigit = 0;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;

        iCount++;                                   // Increment digit counter

        iNum = iNum / 10;                           // Reduce number

    }

    return iCount;

}   // End of CountDigit

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRet = 0;

    printf( "Enter the number to get the count of digits :\t" );
    scanf( "%d" ,&iNumber );

    if( iNumber <= 0 ) 
    {

        printf( "\nError : Please enter the non zero and positive number only.\n" );
        return -1;                                  // Input validation

    }

    iRet = CountDigit( iNumber );                   // Function call

    printf( "There are %d digits in the number %d .\n" ,iRet ,iNumber );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12345       Output : 5
//  Input : 9           Output : 1
//  Input : 100         Output : 3
//
/////////////////////////////////////////////////////////////////