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
//  Description :   It is used to calculate the average.     
//  Input :         int , int *Arr
//  Output :        float
//  Author :        Tushar Vikas Bhore.
//  Date :          01/04/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
float CalcAverage( int iLimit , const int Brr[] )
{

    int iCnt = 0 , iSum = 0;
    float fAverage = 0.0f;

    //  Business Logic.
    iCnt = 0;
    while(  iCnt < iLimit  )
    {

        iSum = iSum + Brr[ iCnt ];
        
        iCnt++;

    }

    //  Calculating the average.
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

    iCnt = 0;
    while( iCnt < iSize  )
    {

        printf( "Enter the element number %d : " , ( iCnt + 1 ) );
        
        scanf( "%d" , &Arr[iCnt] );

        printf( "\n" );

        iCnt++;

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
                //Enter how many elements you want to store :     5
                // Enter the elements :

                // Enter the element number 1 : 10

                // Enter the element number 2 : 10

                // Enter the element number 3 : 10

                // Enter the element number 4 : 10

                // Enter the element number 5 : 10

                // The Average of the numbers is : 10.000000.

// //  TestCase 2 : 

                // Enter how many elements you want to store :     6
                // Enter the elements :

                // Enter the element number 1 : 30

                // Enter the element number 2 : 30

                // Enter the element number 3 : 30

                // Enter the element number 4 : 30

                // Enter the element number 5 : 30

                // Enter the element number 6 : 30

                // The Average of the numbers is : 30.000000.

/////////////////////////////////////////////////////////////////

