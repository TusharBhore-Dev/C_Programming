/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        check each element from first element
        calculate the frequency of even number  
        Display the frequency of even numbers

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
//  Function Name : CalcFrequencyOfEven
//  Description :   It is used to display the count of even        
//  Input :         int , int *Arr
//  Output :        int
//  Author :        Tushar Vikas Bhore.
//  Date :          01/04/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
int CalcFrequencyOfEven( int iLimit , const int Brr[] )
{

    int iCnt = 0 , iCountFreq = 0;

    //  Business Logic.
    iCnt = 0;
    while( iCnt < iLimit )
    {

        if( ( Brr[ iCnt ] % 2 ) == 0 )
        {

            iCountFreq++;

        }

        iCnt++;
    }

    return iCountFreq;

}   // End of CalcFrequencyOfEven


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iRet = 0 , iCnt = 0;
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
    while( iCnt < iSize )
    {

        printf( "Enter the element number %d : " , ( iCnt + 1 ) );
        
        scanf( "%d" , &Arr[iCnt] );

        printf( "\n" );

        iCnt++;

    }

    iRet = CalcFrequencyOfEven( iSize , Arr );

    printf( "The frequency of the even number is : %d.\n" ,iRet );

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
//        Enter how many elements you want to store :     7
//        Enter the elements :
//
//        Enter the element number 1 : 15
//
//        Enter the element number 2 : 45
//
//        Enter the element number 3 : 85
//
//        Enter the element number 4 : 79
//
//        Enter the element number 5 : 84
//
//        Enter the element number 6 : 56
//
//        Enter the element number 7 : 78
//
//        The frequency of the even number is : 3.
//
//  TestCase 2 :
//      
//      Enter how many elements you want to store :     -5
//      Error : Please enter the valid input range.
//
//  TestCase 3 :
// 
//      Enter how many elements you want to store :     5
//      Enter the elements :
//
//      Enter the element number 1 : 10
//
//      Enter the element number 2 : 50
//
//      Enter the element number 3 : 865
//
//      Enter the element number 4 : 85
//
//      Enter the element number 5 : 56
//
//      The frequency of the even number is : 3.
//
/////////////////////////////////////////////////////////////////

