/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        Display the elements in reverse order

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
//  Function Name : ReverseDisplay()
//  Description :   It is used to display the elements in reverse order       
//  Input :         int , int *Arr 
//  Output :        void
//  Author :        Tushar Vikas Bhore.
//  Date :          28/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values
void ReverseDisplay( int iLimit , const int Brr[] )
{

    int iCnt = 0;

    printf( "The elements of the array in reverse order are as follow : \n\n" );
    
    //  Business Logic.

    iCnt = ( iLimit -1 );
    
    while( iCnt > -1  )
    {

        printf( "| %d | \n" ,Brr[ iCnt ] );

        iCnt--;

    }

}   // End of ReverseDisplay


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iCnt = 0 , iSize = 0;
    int *iArr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d" ,&iSize );

    if( iSize <= 0 )
    {

        printf( "Error : Please provide valid input only.( Positive only )\n" );

        return -1;

    }

    //  mEmOrY AlOCaTiOn
    iArr = ( int * ) malloc ( iSize *  sizeof( *iArr ) );

    if( iArr == NULL )
    {

        printf( "Error : The application is unable to allocate the memory.\n" );

        return -1;

    }

    printf( "Enter the elements : \n");

    //  Loop to accept the elements from the user.
    iCnt = 0 ;
    while( iCnt < iSize )
    {

        printf( "\nEnter the number %d :\t" , ( iCnt + 1 ) );

        scanf( "%d" ,&iArr[ iCnt ] );

        iCnt++;

    }

    ReverseDisplay( iSize , iArr );
    
    //  Deallocate the memory.
    free( iArr );

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//      
//    Enter how many elements you want to store :     6
//      Enter the elements :
//
//      Enter the number 1 :    11
//
//      Enter the number 2 :    21
//
//      Enter the number 3 :    51
//
//      Enter the number 4 :    101
//
//      Enter the number 5 :    201
//
//      Enter the number 6 :    301
//      The elements of the array in reverse order are as follow :
//
//      | 301 |
//      | 201 |
//      | 101 |
//      | 51 |
//      | 21 |
//      | 11 |
//
//      TestCase : 2
//      Enter how many elements you want to store :     -5
//      Error : Please provide valid input only.( Positive only )
//
//      TestCase : 3
//      Enter how many elements you want to store :     3
//      Enter the elements :
//
//      Enter the number 1 :    11
//
//      Enter the number 2 :    21
//
//      Enter the number 3 :    50
//      The elements of the array in reverse order are as follow :
//
//      | 50 |
//      | 21 |
//      | 11 |
//
/////////////////////////////////////////////////////////////////

