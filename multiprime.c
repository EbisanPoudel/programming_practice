#include <stdio.h>

int main()
{
    int i, j;
    int n;
    int count = 0;

    printf("How many numbers to check? ");
    scanf("%d", &n);

    printf("\n");

    int x[n];

    printf("Enter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("\n");

    for (j = 0; j < n; j++)
    {
        count = 0;

        if (x[j] <= 0)
        {
            printf("%d = Invalid input\n", x[j]);
        }
        else if (x[j] == 1)
        {
            printf("%d = Neither prime nor composite\n", x[j]);
        }
        else
        {
            for (i = 2; i < x[j]; i++)
            {
                if (x[j] % i == 0)
                {
                    count = 1;
                    break;
                }
            }

            if (count == 0)
            {
                printf("%d = Prime\n", x[j]);
            }
            else
            {
                printf("%d = Non-prime\n", x[j]);
            }
        }
    }

    return 0;
}
