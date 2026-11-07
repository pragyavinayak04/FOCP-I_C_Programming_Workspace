
#include <stdio.h>

int main(void)
{
    int n, i, j, spaces;

    printf("Enter an odd number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2 + 1; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        spaces = 2 * (n / 2 + 1 - i) + 3;

        for(j = 1; j <= spaces; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for(i = n / 2; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        spaces = 2 * (n / 2 + 1 - i) + 3;

        for(j = 1; j <= spaces; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
