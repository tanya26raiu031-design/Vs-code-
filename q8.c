#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces (n - i spaces)
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print asterisks (2*i - 1 asterisks)
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}