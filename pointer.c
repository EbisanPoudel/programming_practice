// pointer basic 
#include<stdio.h>
int main()
{
int x=10;
int *y=&x;

printf("real value=%d \n",x);
printf("address of x is=%p \n",&x);
printf("real value by pointer(*y)=%d \n",*y);
 return 0;
}
