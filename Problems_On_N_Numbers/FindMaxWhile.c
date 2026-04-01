/*
    Algorithm

    START
        Accept how many element user want to store
        Accept the elements from the user
        check each element from first element
        Strore the maximum element 
        Display the max element
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
//  Function Name : FindMaxiMumElement
//  Description :   It is used to display the maximum element of array         
//  Input :         int , int *Arr
//  Output :        int
//  Author :        Tushar Vikas Bhore.
//  Date :          26/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
int FindMaxiMumElement( int iLimit , const int Brr[] )
{

    int iMax = 0 , iCnt = 0;

    iMax = Brr[0];

    //  Counter will start from second element
    
    //  Business Logic.
    iCnt = 1; 
    while( iCnt < iLimit )
    {

        if( iMax < Brr[ iCnt ] )
        {

            iMax = Brr[ iCnt ];

        }

        iCnt++;

    }

    return iMax;

}   // End of FindMaxiMumElement


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iRet = 0 , iCnt = 0;
    int *Arr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d" ,&iSize );

    //  input validation
    if( iSize <= 0 )
    {

        printf( "Error : Please enter the positive and non zero limit only.\n" );
        return -1;

    }

    // used *Arr so that if we wanna change the array type it will be easy
    Arr = ( int * ) malloc ( iSize * sizeof( *Arr ) );

    if( Arr == NULL )
    {

        printf( " Error : The application is failed to allocate the memory for the elements.\n" );

        return -1;

    }

    printf( "Enter the elements : \n\n" );

    iCnt = 0;
    while( iCnt < iSize )
    {

        printf( "Enter the element number %d : " , ( iCnt + 1 ) );
        
        scanf( "%d" , &Arr[iCnt] );

        printf( "\n" );

        iCnt++;

    }

    iRet = FindMaxiMumElement( iSize , Arr );
    
    printf( "The maximum element is : %d.\n" ,iRet );

    //  Memory Deallocation.
    free( Arr );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//      
//      Enter how many elements you want to store : 5
//      Enter the elements :
//
//
//      Enter the element number 1 : 10 
//      Enter the element number 2 : 20
//      Enter the element number 3 : 30 
//      Enter the element number 4 : 40
//      Enter the element number 5 : 50
//
//      The maximum element is : 50.
//  
/////////////////////////////////////////////////////////////////
