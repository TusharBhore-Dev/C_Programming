/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the element to search in list
        Accept the elements from the user
        check each element from first element
        if the element is present display present   
        if not present then display not present

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : LinearSearch()
//  Description :   It is used to search the element is present or not       
//  Input :         int , int *Arr , int 
//  Output :        boolean
//  Author :        Tushar Vikas Bhore.
//  Date :          27/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
bool LinearSearch( int iLimit , const int Brr[] , int iTrgt )
{

    int iCnt = 0;
    for( iCnt = 0; iCnt < iLimit; iCnt++ )
    {

        if( Brr[ iCnt ] == iTrgt )
        {

            return true;        //  Bad programming practice

            break;

        }

    }

    return false;

} // End of LinearSearch


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iTarget = 0 , iCnt = 0;
    bool bRet = false;
    int *iArr = NULL;

    printf( "Enter how many elements you want to store :\t" );
    scanf( "%d"  ,&iSize );

    if( iSize <= 0 )
    {

        printf( "Error : Please enter the valid limit.( Positive only )\n" );

        return -1;

    }

    printf( "\nEnter the number to search is it entered in list or not : " );
    scanf( "%d" ,&iTarget );

    //  Memory Allocation.
    iArr = ( int * ) malloc ( iSize * sizeof( *iArr ) );

    if( iArr == NULL )
    {

        printf( "Error : The application is not able to allocate the memory for the elements.\n" );

        return -1;

    }

    printf( "Enter the elements : \n\n" );
    for( iCnt = 0; iCnt < iSize; iCnt++ )
    {

        printf( "Enter the element number %d :" ,iCnt + 1 );
        
        scanf( "%d" , &iArr[ iCnt ] );

    }

    bRet = LinearSearch( iSize , iArr , iTarget );

    if( bRet == true )
    {

        printf( "\nThe entered number is %d and it is present in the entered list.\n" ,iTarget );

    }
    else
    {

        printf( "\nThe entered number is %d and it is not present in the entered list.\n" ,iTarget );

    }

    //  Deallocate the memory.
    free( iArr );

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//       
//  Enter how many elements you want to store :     6
//
//  Enter the number to search is it entered in list or not : 11
//  Enter the elements :
//
//  Enter the element number 1 :11
//  Enter the element number 2 :21
//  Enter the element number 3 :51
//  Enter the element number 4 :101
//  Enter the element number 5 :201
//  Enter the element number 6 :156
//
//  The entered number is 11 and it is present in the entered list.
//
//  TestCase : 2 
//
//  Enter how many elements you want to store :     -8
//  Error : Please enter the valid limit.( Positive only )
//
//  TestCase : 3
//  
//  Enter how many elements you want to store :     6
//
//  Enter the number to search is it entered in list or not : 11
//  Enter the elements :
//
//  Enter the element number 1 :2
//  Enter the element number 2 :
//  5
//  Enter the element number 3 :5
//  Enter the element number 4 :6
//  Enter the element number 5 :8
//  Enter the element number 6 :65
//
//  The entered number is 11 and it is not present in the entered list.
//
/////////////////////////////////////////////////////////////////

