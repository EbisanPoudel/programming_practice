// this is my bla code first written

#include<stdio.h>
int main()
{
    int n;
    
    printf("enter a number");
    scanf("%d",&n);
    int i=0;
    int x[10];
    int count=0;
    for(i=0;n!=0;i++)
    {
        x[i]=n%10;
        count ++;
        n=n/10;
    }
    int y[count];

    for(int j=0;j<count;j++)
    {
    int max=x[j];

    for(i=0;i<count;i++)
{
if (max < x[i])  //> for smallest
max=x[i];
}
y[j]=max;
}
printf("larget second digit=%d",y[1]);
}