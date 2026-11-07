#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Print '*' on the first column, the diagonal boundary, or the final row
            if (j == 1 || j == i || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" "); // Print space inside the hollow triangle
            }
        }
        printf("\n");
    }
    return 0;
}