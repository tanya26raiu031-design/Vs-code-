#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper half (pyramid of height n)
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (inverted pyramid of height n - 1)
    for (int i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}