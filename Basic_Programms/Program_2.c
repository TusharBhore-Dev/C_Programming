/*

    Algorithm :

        START
        
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 10 to iNumOne
            Assign value 11 to iNumSec
            Perform Addition of iNumOne & iNumSec and store in iAns
            Display the result of addition on screen
            Return 0 to indicate successful execution
        
        STOP

*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumOne = 0;                                // First input variable
    int iNumSec = 0;                                // Second input variable

    int iAns = 0;                                                 

    iNumOne = 10;                                   // Initialization
    iNumSec = 11;                                   

    iAns = iNumOne + iNumSec;                       // Business Logic

    printf( "The addition of the %d and  %d is : %d." ,iNumOne ,iNumSec ,iAns );

    return 0;                                       

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (10, 11)        Output : 21
//
/////////////////////////////////////////////////////////////////