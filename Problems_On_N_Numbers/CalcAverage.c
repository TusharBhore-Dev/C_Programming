/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        Add all the elements and divide the sum by total elements
        Display the average

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
//  Function Name : CalcAverage()
//  Description :   It is used to calculate the average        
//  Input :         int , int *Arr
//  Output :        float
//  Author :        Tushar Vikas Bhore.
//  Date :          27/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
float CalcAverage( int iLimit , const int Brr[] )
{

    int iCnt = 0 , iSum = 0;
    float fAverage = 0.0f;

    for( iCnt = 0; iCnt < iLimit; iCnt++ )
    {

        iSum = iSum + Brr[ iCnt ];

    }

    fAverage = iSum / iLimit;
    
    return fAverage;

}   // End of CalcAverage


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iCnt = 0;

    // float for storing ans with decimal
    float fRet = 0.0f;

    int *Arr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d" ,&iSize );

    //  input validation
    if( iSize <= 0 )
    {

        printf( "Error : Please enter the valid input range.\n" );

        return -1;

    }

    //  Memory allocation
    Arr = ( int * ) malloc ( iSize * sizeof( *Arr ) );

    if( Arr == NULL )
    {

        printf( " Error : The application is failed to allocate the memory for the elements.\n" );

        return -1;

    }

    printf( "Enter the elements : \n\n" );

    for( iCnt = 0; iCnt < iSize; iCnt++ )
    {

        printf( "Enter the element number %d : " , ( iCnt + 1 ) );
        
        scanf( "%d" , &Arr[iCnt] );

        printf( "\n" );

    }

    fRet = CalcAverage( iSize , Arr );

    printf( "The Average of the numbers is : %f.\n" ,fRet );

    //  Deallocate Memory
    free( Arr );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase 1 : 
//
/////////////////////////////////////////////////////////////////

