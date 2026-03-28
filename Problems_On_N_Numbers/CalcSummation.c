/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        add each element from first element to last
        Display the summation of all the elements

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CalcSummation
//  Description :   It is used to display the summation of all      
//  Input :         int , int *Arr
//  Output :        int
//  Author :        Tushar Vikas Bhore.
//  Date :          26/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
int CalcSummation( int iLimit , const int Brr[] )
{

    int iCnt = 0 , iSum = 0;

    for( iCnt = 0; iCnt < iLimit; iCnt++ )
    {

        iSum = iSum + Brr[ iCnt ];

    }

    return iSum;

} // End of CalcSummation


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iCnt = 0 , iRet = 0 , iSize = 0;
    int *iArr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d" ,&iSize );

    //  input validation
    if( iSize <= 0 )
    {

        printf( "\nError : Please provide the valid input.( Positive Only )\n" );

        return -1;

    }

    // Memory Allocation.
    iArr = ( int * ) malloc ( iSize * sizeof( iArr ) );

    printf( "\n\nEnter the elements : \t" );

    for( iCnt = 0; iCnt < iSize; iCnt++ )
    {

        printf( "\nEnter the number %d : \t" , ( iCnt + 1 ) );

        scanf( "%d" ,&iArr[ iCnt ] );

    }

    iRet = CalcSummation( iSize , iArr );

    printf( "The summation of all the entered elements is : %d.\n" ,iRet );

    //  Memory Deallocation.
    free( iArr );

    return 0;

} // End of main


/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      Enter how many elements you want to store :     7
//
//
//      Enter the elements :
//      Enter the number 1 :    10
//
//      Enter the number 2 :    50
//
//      Enter the number 3 :    62
//
//      Enter the number 4 :    62
//
//      Enter the number 5 :    51
//
//      Enter the number 6 :    51
//
//      Enter the number 7 :    21
//      The summation of all the entered elements is : 307.
//
//      
//      TestCase : 2
//    
//      Enter how many elements you want to store :     -5
//
//      Error : Please provide the valid input.( Positive Only )
//
//      TestCase : 3
// 
//      Enter how many elements you want to store :     5
//
//
//      Enter the elements :
//      Enter the number 1 :    1
//
//      Enter the number 2 :    2
//
//      Enter the number 3 :    3
//
//      Enter the number 4 :    5
//
//      Enter the number 5 :    5
//      The summation of all the entered elements is : 16.
//
//
/////////////////////////////////////////////////////////////////
