#include<stdio.h>
int main(void)
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j == i)
                printf("%d", i);
            else
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}