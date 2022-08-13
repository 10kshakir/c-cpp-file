#include <stdio.h>
int get_max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int a,b;
    a=9;
    b=15;
    printf("%d",get_max(a,b));
}
