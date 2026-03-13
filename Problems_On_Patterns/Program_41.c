
/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 5    4   3   2   1
///
////
/////
/////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern()
{

    int iCnt = 5;

    for( iCnt = 5; iCnt >= 1; iCnt-- )
    {

        printf( "%d\t" ,iCnt );

    }

}

int main()
{

   DisplayPattern();

}