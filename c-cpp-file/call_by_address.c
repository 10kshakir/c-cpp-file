#include <stdio.h>
void div_rem(int a,int b,int *q,int *r)
{
    *q=a/b;
    *r=a%b;
}
int main()
{
    int a,b,divided_bY,remainder;
    scanf("%d%d",&a,&b);
    div_rem(a,b,&divided_bY,&remainder);
    printf("%d %d is divided by %d times and remainder is %d ",a,b,divided_bY,remainder);
}
