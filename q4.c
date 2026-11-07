#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            if (j < i)
            {
                printf(" "); // prints space between numbers, avoiding trailing spaces
            }
        }
        printf("\n");
    }
    return 0;
}