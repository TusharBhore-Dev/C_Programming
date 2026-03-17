/*
    Algorithm

    START
        Accept number as iNum
        Calculate square of iNum
        Count digits in iNum
        Extract last 'n' digits of square
        Compare extracted digits with iNum
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckAutomorphic
//  Description :   It is used to check whether a number is Automorphic or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckAutomorphic( int iNum )
{

    int iCountDig = 0 , iDigit = 0 , iLastDigOfNum = 0 , iTemp = 0 , iLastDigOfSqre = 0 , iNumSqre = 0;
    
    iNumSqre = iNum * iNum;                         // Square calculation

    iTemp = iNum;

    while( iNum != 0 )
    {

        iCountDig++;                                // Count digits
        
        iNum = iNum / 10;

    }

    iNum = iTemp;

    int iCnt = 0;
    for( iCnt = 1; ( iCnt <= iCountDig ) && ( iNum != 0 ) && ( iNumSqre != 0 ); iCnt++ )
    {

        iDigit = iNum % 10;

        iLastDigOfNum = iLastDigOfNum * 10 + iDigit;

        iNum = iNum / 10;

        iDigit = iNumSqre % 10;

        iLastDigOfSqre = iLastDigOfSqre * 10 + iDigit;

        iNumSqre = iNumSqre / 10;

    }

    return( iLastDigOfNum == iLastDigOfSqre );      // Verification logic

}   // End of CheckAutomorphic

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it automorphic or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please provide the non zero and positive number only.\n" );

        return -1;                                  // Validation check

    }

    bRet = CheckAutomorphic( iNum );                // Function call

    if( bRet == true )
    {

        printf( "The entered number %d is automorphic.\n" ,iNum );

    }
    else
    {

        printf( "The entered number %d is not automorphic.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5           Output : Automorphic
//  Input : 25          Output : Automorphic
//  Input : 7           Output : Not Automorphic
//
/////////////////////////////////////////////////////////////////