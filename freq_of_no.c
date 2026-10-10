//\(-9.22 \times 10^{18}\) to \(9.22 \times 10^{18}\).{{{{range of input }}}}
#include<stdio.h>
int main()
{
 long long int a;
 printf("enter a number");
 scanf("%lld",&a);
long long int b=a;
 int count=0;
 for(;b!=0;)
 {
    b=b/10;
    count++;
}
long long int b1=a;

int x[count];
for(int i=0;b1!=0;i++)
 {
    x[i]=b1%10;
    b1=b1/10;
}


for(int i=0;i<=9;i++)
{
    int count1=0;
   for(int j=0;j<count;j++)
   {
    if(i==x[j])
    count1++;
   }
   printf("\n");
   printf("%d frequency = %d\n",i,count1);
}

}