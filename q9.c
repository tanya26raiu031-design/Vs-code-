#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces (i - 1 spaces)
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        // Print asterisks (2*(n - i) + 1 asterisks)
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}