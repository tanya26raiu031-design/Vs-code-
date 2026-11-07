#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    // Upper half including the middle row
    for (int i = 1; i <= mid; i++)
    {
        // Left wing stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // Spaces in between (for rows before the middle)
        if (i < mid)
        {
            for (int j = 1; j <= n - 2 * i; j++)
            {
                printf(" ");
            }
            // Right wing stars
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            // Middle row is completely filled with asterisks
            for (int j = 1; j <= n - mid; j++)
            {
                printf("*");
            } // Note: for middle row, left and right meet/overlap to form 'n' stars total
        }
        printf("\n");
    }

    // Lower half (mirror of upper half, excluding the middle row)
    for (int i = mid - 1; i >= 1; i--)
    {
        // Left wing stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // Spaces in between
        for (int j = 1; j <= n - 2 * i; j++)
        {
            printf(" ");
        }
        // Right wing stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}