#include <stdio.h>

int main()
{
    int n;

    printf("enter a number: ");
    if (scanf("%d", &n) != 1) return 1;

    // Handle negative numbers
    if (n < 0) n = -n;

    int x[10];
    int count = 0;
    int i = 0;

    // Extract digits into array x[]
    for (i = 0; n != 0; i++)
    {
        x[i] = n % 10;
        count++;
        n = n / 10;
    }

    int y[10];
    int distinct_count = 0;

    // Sort distinct digits from largest to smallest into y[]
    for (int j = 0; j < count; j++)
    {
        // Initialize max to -1 so any real digit (0-9) is larger
        int max = -1;

        // Find the largest digit currently remaining in x[]
        for (i = 0; i < count; i++)
        {
            // Ignore digits marked as processed (x[i] == -1)
            if (x[i] != -1 && x[i] > max)
            {
                max = x[i];
            }
        }

        // Stop if no valid digits remain
        if (max == -1) break;

        // Save the largest digit into y[]
        y[distinct_count] = max;
        distinct_count++;

        // Mark ALL occurrences of this max digit as processed using -1
        for (i = 0; i < count; i++)
        {
            if (x[i] == max)
            {
                x[i] = -1;
            }
        }
    }

    // Print result
    if (distinct_count < 2) {
        printf("There is no distinct second largest digit.\n");
    } else {
        printf("larget second digit=%d", y[1]);
    }

    return 0;
}