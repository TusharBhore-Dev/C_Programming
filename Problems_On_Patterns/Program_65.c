#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Description   : Prints an inverted triangular numeric pattern.
//
/////////////////////////////////////////////////////////////////
void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    i = 1;
    while (i <= iRow)
    {
        j = 1;
        while (j <= ((iCol - i) + 1))
        {
            printf("%d\t", j);
            j++;
        }
        i++;
        printf("\n");
    }
}   // End of DisplayPattern

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////
int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter how many rows you want :\t");
    scanf("%d", &iRow);

    printf("Enter how many columns you want :\t");
    scanf("%d", &iCol);

    if (iRow < 0 || iCol < 0)
    {
        printf("Error : Invalid Input.\n");
        printf("Please provide positive numbers only.\n");
        return -1;
    }

    DisplayPattern(iRow, iCol);

    return 0;

}   // End of main