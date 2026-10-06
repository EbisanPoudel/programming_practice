#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("enter how many itteration\n");
    scanf("%d",&n);
printf("%d,",a);
printf("%d,",b);

    for (i=1;i<=n;i++)
    {
c=a+b;
printf("%d,",c);
a=b;
b=c;
    }
    return 0;
}