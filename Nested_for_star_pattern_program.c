#include <stdio.h>

int main()
{
    int i, k, j;
    printf("Enter the value of row(k) : ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}