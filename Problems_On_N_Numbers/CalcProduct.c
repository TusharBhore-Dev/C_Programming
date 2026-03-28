/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        multiply each element from  list
        Display the product of all the elements

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
//  Function Name : CalcProductOfAllEle()
//  Description :   It is used to display the product of all      
//  Input :         int , int *Arr
//  Output :        double
//  Author :        Tushar Vikas Bhore.
//  Date :          28/03/2026
//
/////////////////////////////////////////////////////////////////

// const is used for not to lose the actual values 
double CalcProductOfAllEle( int iLimit , const int Brr[] )
{

    int iCnt = 0;
    double dProduct = 1.0;

    for( iCnt = 0; iCnt < iLimit; iCnt++ )
    {

        dProduct = dProduct * ( Brr[ iCnt ] );

    }

    return dProduct;

}   // End of CalcProductOfAllEle


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iCnt = 0;
    int * iArr = NULL;

    // The answer of the product can be more
    double dRet = 0.0;

    printf( "Enter how many elements you want to store :\t");
    scanf( "%d" ,&iSize );

    if( iSize <= 0 )
    {

        printf( "Error : Please provide the valid limit.\n");

        return -1;

    }

    //  Memory Allocation
    iArr = ( int * ) malloc ( iSize * sizeof( *iArr ) );

    if( iArr == NULL )
    {

        printf( "Error : The application is unable to allocate the memory.\n");

        return -1;

    }

    printf( "\nEnter the elements : \n");

    for( iCnt = 0; iCnt < iSize; iCnt++ )
    {

        printf( "\nEnter the number %d : " , ( iCnt + 1 ) );

        scanf( "%d" ,&iArr[ iCnt ] );

    } 

    dRet = CalcProductOfAllEle( iSize , iArr );

    printf( "The product of all elements is : %lf.\n" ,dRet );

    //  Deallocating the memory.
    free( iArr );

    return 0;

}// End of main


/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      Enter how many elements you want to store :     5
//
//      Enter the elements :
//
//      Enter the number 1 : 10
//
//      Enter the number 2 : 20
//
//      Enter the number 3 : 30
//
//      Enter the number 4 : 40
//
//      Enter the number 5 : 50
//      The product of all elements is : 12000000.000000.
//
//
//       TestCase : 2 
//      Enter how many elements you want to store :     -5
//      Error : Please provide the valid limit.
//
//      TestCase : 3
//      Enter how many elements you want to store :     5
//
//      Enter the elements :
//
//      Enter the number 1 : 4
//
//      Enter the number 2 : 2
//
//      Enter the number 3 : 3
//
//      Enter the number 4 : 51
//
//      Enter the number 5 : 64
//      The product of all elements is : 78336.000000.
/////////////////////////////////////////////////////////////////
