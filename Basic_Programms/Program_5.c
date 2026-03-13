/*

    Algorithm

        START
        
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 30 to iNumOne
            Assign value 6 to iNumSec
            Perform Division of iNumOne by iNumSec and store in iAns
            Display the result of division on screen
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

    iNumOne = 30;                                   
    iNumSec = 6;                                    

    iAns = iNumOne / iNumSec;                       

    printf( "The division of the %d and  %d is : %d." ,iNumOne ,iNumSec ,iAns );

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (30, 6)        Output : 5
//
/////////////////////////////////////////////////////////////////