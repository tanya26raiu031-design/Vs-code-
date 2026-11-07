#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", i * j);
            if (j < n)
            {
                printf(" "); // prints space between numbers, avoiding trailing spaces
            }
        }
        printf("\n");
    }
    return 0;
}