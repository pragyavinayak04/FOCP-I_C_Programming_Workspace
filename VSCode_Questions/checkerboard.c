
#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Enter the size of checkerboard: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }

    return 0;
}
