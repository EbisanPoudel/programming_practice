//palindrom check for array numbers
#include<stdio.h>
int main()
{
   int n;
    printf("how many numbers to check\t");
    scanf("%d", &n);
    int a[n],b[n];
    int i=0;
    
    printf("enter numbers one by one \t");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
 
    int j,x=0;
    for(i=0;i<n;i++)
    {
        x=0;
    for(j=a[i];j!=0;)
    {
        int rem;
rem=j%10;
x=10*x+rem;
j=j/10;
    }
b[i]=x;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        printf("%d:it is palindrom\n",b[i]);
        else 
        printf("%d:it is non-palindrom\n",b[i]);
    }

}
