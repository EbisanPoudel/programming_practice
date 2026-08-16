//multiplication table
#include<stdio.h>
int main()
{
    int x,y;

    printf("which number multiplication table to generate?\n");
    scanf("%d",&x);

    printf("Up to how much times?\n");
    scanf("%d",&y);

    int i;

    for(i=1;i<=y;i++)
    {
        printf("%d * %d = %d \n",x,i,x*i);
    }
    return 0;
}
