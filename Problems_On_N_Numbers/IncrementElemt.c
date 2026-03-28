/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        add one to each element from first to last
        Display the all the elements

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
//  Function Name : DisplayIncrement
//  Description :   It is used to display the elements by incrementing the value by one         
//  Input :         int , int *Arr
//  Output :        void
//  Author :        Tushar Vikas Bhore.
//  Date :          28/03/2026
//
/////////////////////////////////////////////////////////////////

void DisplayIncrement( int iLimit , int Brr[] )
{

    int iCnt = 0;

    printf( "The elements are as follow : \n" );

    for( iCnt = 0; iCnt < iLimit ; iCnt++ )
    {

        printf( "The number %d is incremented as : %d.\n" , Brr[ iCnt ] , ( Brr[ iCnt ] + 1 ) );

    }

}   // End of DisplayIncrement


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iCnt = 0;
    int * iArr = NULL;

    printf( "Enter how many elements you want to store :\t");
    scanf( "%d" ,&iSize );

    if( iSize <= 0 )
    {

        printf( "Error : Please provide positive value only.\n" );

        return -1;

    }

    //  Used *iArr so that we can change the data type of ptr easily
    iArr =  ( int * ) malloc ( iSize * sizeof( *iArr ) );

    if( iArr == NULL )
    {

        printf( "Error : The application is unable to allocate the memory.\n" );

        return -1;

    }

    printf( "\nEnter the elements : \n" );

    for( iCnt = 0 ; iCnt < iSize; iCnt++ )
    {

        printf( "\nEnter the element number %d : \t" , ( iCnt + 1 ) );

        scanf( "%d" ,&iArr[ iCnt ] );

    }

    DisplayIncrement( iSize , iArr );

    //  Deallicating the memory.
    free( iArr );

    return 0;

} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//        
//        Enter how many elements you want to store :     7
//
//        Enter the elements :
//
//        Enter the element number 1 :    10
//
//        Enter the element number 2 :    20
//
//        Enter the element number 3 :    50
//
//        Enter the element number 4 :    100
//
//        Enter the element number 5 :    200
//
//        Enter the element number 6 :    500
//
//        Enter the element number 7 :    1000
//        The elements are as follow :
//        The number 10 is incremented as : 11.
//        The number 20 is incremented as : 21.
//        The number 50 is incremented as : 51.
//        The number 100 is incremented as : 101.
//        The number 200 is incremented as : 201.
//        The number 500 is incremented as : 501.
//        The number 1000 is incremented as : 1001.
//  TestCase : 2
//      
//        Enter how many elements you want to store :     -5
//        Error : Please provide positive value only.

/////////////////////////////////////////////////////////////////

