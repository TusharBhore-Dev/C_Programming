/*
    Algorithm

        START
        
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 11 to iNumOne
            Assign value 6 to iNumSec
            Perform Multiplication of iNumOne & iNumSec and store in iAns
            Display the result of multiplication on screen
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

    iNumOne = 11;                                   
    iNumSec = 6;                                    

    iAns = iNumOne * iNumSec;                       // Business Logic

    printf( "The multiplication of the %d and  %d is : %d." ,iNumOne ,iNumSec ,iAns );

    return 0;                                       

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (11, 6)        Output : 66
//
/////////////////////////////////////////////////////////////////