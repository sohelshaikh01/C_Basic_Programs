#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("\nfactorial of %d is : %d", n, fact);
    }

    return 0;
}