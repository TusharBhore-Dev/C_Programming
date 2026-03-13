/*

    Algorithm

        START
        
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 21 to iNumOne
            Assign value 6 to iNumSec
            Perform Modulo operation (Remainder) of iNumOne by iNumSec and store in iAns
            Display the remainder of the division on screen
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

    int iNumOne = 0;                                
    int iNumSec = 0;                               

    int iAns = 0;                                   

    iNumOne = 21;                                 
    iNumSec = 6;                                    

    iAns = iNumOne % iNumSec;                       

    printf( "The remainder of division of the %d and  %d is : %d." ,iNumOne ,iNumSec ,iAns );

    return 0;
                                           
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (21, 6)        Output : 3
//
/////////////////////////////////////////////////////////////////