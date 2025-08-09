#include <stdio.h>
int main()
{
    int n, i, j, k = 97, d = 1;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 1)
            {
                printf("%d ", d++);
            }
            if (j % 2 == 0)
            {
                printf("%c ", k++);
            }
        }
        printf("\n");
    }
    return 0;
}