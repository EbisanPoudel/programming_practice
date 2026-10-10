// just for 5 inputs 
#include <stdio.h>

int main()
{
    int a[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[5];
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        int found = 0;

        for(int j = 0; j < count; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            b[count] = a[i];
            count++;
        }
    }

    for(int i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
