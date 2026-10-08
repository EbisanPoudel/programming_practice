#include<stdio.h>
int main ()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

if(a==1)
{
printf("neither prime nor composite");
return 0;
}
else if(a<1){
printf("invalid input");
return 0;
}

    int i=1;
    int count=0;

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
       
    }
    if (count==2)
    {
        printf("prime");
    }
    else
    printf("composite");
printf("\n");
    return 0;
}