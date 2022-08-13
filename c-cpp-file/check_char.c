#include <stdio.h>
#include <string.h>
int make_sum()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}
int main()
{
    int s =make_sum();
    printf("%d",s);

    return 0;
}
