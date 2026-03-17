/*
    Algorithm

    START
        Accept number as iNum
        Initialize a loop until the number becomes zero
        Extract the last digit using the modulo operator
        Print the extracted digit to the screen
        Remove the last digit by dividing the number by 10
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
//  Function Name : DisplayDigitsReverse
//  Description :   It is used to display the digits of a number in reverse order         
//  Input :         Integer 
//  Output :        None
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayDigitsReverse( int iNum )
{

    int iDigit = 0 ;

    printf( "\nThe reversed digits in the entered number are as follow : \n" );

    while( iNum != 0 )
    {

        iDigit = iNum % 10;                         // Extract last digit

        printf( "%d\t" ,iDigit );                   // Display digit

        iNum = iNum / 10;                           // Update number

    }

}   // End of DisplayDigitsReverse

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0;

    printf( "Enter the number to get the count of digits :\t" );
    scanf( "%d" ,&iNumber );

    if( iNumber <= 0 ) 
    {

        printf( "\nError : Please enter the non zero and positive number only.\n" );
        return -1;                                  // Input validation

    }

    DisplayDigitsReverse( iNumber );                // Function call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 123         Output : 3  2   1
//  Input : 504         Output : 4  0   5
//  Input : 7           Output : 7
//
/////////////////////////////////////////////////////////////////