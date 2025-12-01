
#include <stdio.h>

int main(void)
{
    int i, j;
    int rows = 5;

    
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");   
    }

    
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
