#include<stdio.h>
int main()
{
int a[5];
    printf("enter numbers");

for(int i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
    int b[5];
    int temp;
    int j=4;
for(int i=0;i<5;i++)
{
    
   b[j]=a[i];
   j--;
   
}
for(int i=0;i<5;i++)
{
    printf("%d ",b[i]);
}
return 0;
    }