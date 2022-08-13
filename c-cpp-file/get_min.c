#include <stdio.h>
#include <stdio.h>
int get_min(int a,int b)
{
    return a>b?b:a;
}
int main()
{
    int a,b;
    a=9;
    b=5;
    printf("%d",get_min(a,b));
}
