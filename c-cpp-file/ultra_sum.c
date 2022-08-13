#include <stdio.h>
void ultra_sum(int *a,int *b)
{
    int sum =*a+*b;
    int mul=*a**b;
    *a=sum;
    *b=mul;
}
int main()
{
    int a =5;
    int b =10;
    ultra_sum(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
