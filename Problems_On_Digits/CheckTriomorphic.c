/*
    Algorithm

    START
        Accept number as iNum
        Calculate cube of iNum
        Count digits in iNum
        Compare last digits of cube with iNum
        If they match, it is Triomorphic
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
//  Function Name : CheckTrioMorphic
//  Description :   It is used to check whether a number is Triomorphic or not         
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tushar vikas bhore
//  Date :          16/03/2026
//
/////////////////////////////////////////////////////////////////

bool CheckTrioMorphic( int iNum )
{

    int iCountDig = 0 , iDigit = 0 , iLastDigOfNum = 0 , iTemp = 0 , iLastDigOfCube = 0 , iNumCube = 0;
    
    iNumCube = iNum * iNum * iNum;                  // Calculate cube

    iTemp = iNum;

    while( iNum != 0 )
    {

        iCountDig++;                                // Digit count
        
        iNum = iNum / 10;

    }

    iNum = iTemp;

    int iCnt = 0;
    for( iCnt = 1; ( iCnt <= iCountDig ) && ( iNum != 0 ) && ( iNumCube != 0 ); iCnt++ )
    {

        iDigit = iNum % 10;

        iLastDigOfNum = iLastDigOfNum * 10 + iDigit;

        iNum = iNum / 10;

        iDigit = iNumCube % 10;

        iLastDigOfCube = iLastDigOfCube * 10 + iDigit;

        iNumCube = iNumCube / 10;

    }

    return( iLastDigOfNum == iLastDigOfCube );      // Verification

}   // End of CheckTrioMorphic

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    printf( "Enter the number to check is it triomorphic or not :\t" );
    scanf( "%d" ,&iNum );

    if( iNum <= 0 )
    {

        printf( "Error : Please provide the non zero and positive number only.\n" );

        return -1;                                  // Validation

    }

    bRet = CheckTrioMorphic( iNum );                // Function call

    if( bRet == true )
    {

        printf( "The entered number %d is triomorphic.\n" ,iNum );

    }
    else
    {

        printf( "The entered number %d is not triomorphic.\n" ,iNum );

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5           Output : Triomorphic (125)
//  Input : 24          Output : Triomorphic (13824)
//  Input : 25          Output : Triomorphic (15625)
//  Input : 7           Output : Not Triomorphic (343)
//
/////////////////////////////////////////////////////////////////