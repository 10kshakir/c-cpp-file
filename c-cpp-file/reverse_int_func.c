#include <stdio.h>
void reverse(int *a)
{
    int sum =0;
    while(*a>0)
    {
        int rem= *a%10;
        *a/=10;
        sum=sum*10+rem;
    }
    *a=sum;
}

int main()
{
    int a =567;
    reverse(&a);
    printf("%d",a);
    return 0;
}
