//increase the value of a variable using pointer
#include<stdio.h>
void add(int *a);
int main()
{
    int a=10;
    printf("value before incrememt of a=%d\n",a);
    add(&a);
    printf("value after increment of a=%d\n",a);
    return 0;


}
void add(int *a)
{
   *a =*a+5;
}
