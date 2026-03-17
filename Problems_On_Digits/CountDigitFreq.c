/*
    Algorithm

    START
        Accept number as iNum and target digit as iDig
        Extract each digit from iNum
        If extracted digit matches iDig, increment counter
        Continue until all digits are checked
        Display the final frequency count
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
//  Function Name : CountDigitFreq
//  Description :   It is used to count frequency of a specific digit         
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

int CountDigitFreq( int iNum , int iDig )
{

    int iCountFreq = 0 , iDigit = 0;

    while( iNum != 0 )
    {

        iDigit = iNum % 10;

        if( iDigit == iDig )                        // Match check
        {

            iCountFreq++;                           // Increment frequency

        }

        iNum = iNum / 10;

    }

    return iCountFreq;

}   // End of CountDigitFreq

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRet = 0 , iDigit = 0;

    printf( "Enter the number :\t" );
    scanf( "%d" ,&iNumber );
    printf( "Enter the digit to find its frequency in the entered number :\t" );
    scanf( "%d" ,&iDigit );

    if( iNumber <= 0 )
    {

        printf( "Error : Please enter the non zero and positive value only.\n" );
        return -1;                                  // Validation check

    } 

    iRet = CountDigitFreq( iNumber , iDigit );      // Function call

    printf("The frequency of the digit ( %d ) in the number ( %d ) is : %d.\n ",iDigit ,iNumber ,iRet );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input No : 12234   Digit : 2   Output : 2
//  Input No : 999     Digit : 9   Output : 3
//  Input No : 123     Digit : 5   Output : 0
//
/////////////////////////////////////////////////////////////////