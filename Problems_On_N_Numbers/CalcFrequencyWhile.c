/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        Accept the number to count its frequency
        check each element from first element
        calculate the frequency of entered number  
        Display the frequency of that element

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
//  Description :   It is used to calculate the frequency of number        
//  Input :         int , int, int *Arr
//  Output :        int
//  Author :        Tushar Vikas Bhore.
//  Date :          26/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
int CalcFrequency( int iLimit , int iTrgt , const int Brr[] )
{

    int iCnt = 0 , iFreq = 0;

    //  Business Logic
    iCnt = 0; 
    while( iCnt < iLimit  )
    {

        if( Brr[ iCnt ] == iTrgt )
        {

            iFreq++;

        }

        iCnt++;

    }

    return iFreq;

}   // End of CalcFrequency


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iTarget = 0 , iRet = 0 , iCnt = 0;
    int *Arr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d" ,&iSize );

    printf( "Enter the number to find its frequency :\t" );
    scanf( "%d" , &iTarget );

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
    while( iCnt < iSize )
    {

        printf( "Enter the element number %d : " , ( iCnt + 1 ) );
        
        scanf( "%d" , &Arr[iCnt] );

        printf( "\n" );
        iCnt++;

    }

    iRet = CalcFrequency( iSize , iTarget , Arr );

    printf( "The frequency of the number %d is : %d.\n" ,iTarget ,iRet );

    //  Deallocate Memory
    free( Arr );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      
//
//      Enter how many elements you want to store :     10
//      Enter the number to find its frequency :        21
//      Enter the elements :
//
//      Enter the element number 1 : 11
//
//      Enter the element number 2 : 21
//
//      Enter the element number 3 : 51
//
//      Enter the element number 4 : 12
//
//      Enter the element number 5 : 21
//
//      Enter the element number 6 : 21
//
//      Enter the element number 7 : 101
//
//      Enter the element number 8 : 141
//
//      Enter the element number 9 : 21
//
//      Enter the element number 10 : 12
//      The frequency of the number 21 is : 4.
//
//      
//      TestCase : 2
//    
//      Enter how many elements you want to store :     5
//      Enter the number to find its frequency :        3
//      Enter the elements :
//
//      Enter the element number 1 : 45
//
//      Enter the element number 2 : 5
//
//      Enter the element number 3 : 5
//
//      Enter the element number 4 : 5
//
//      Enter the element number 5 : 55
//
//      The frequency of the number 3 is : 0.
//
/////////////////////////////////////////////////////////////////

