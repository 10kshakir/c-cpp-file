#include <stdio.h>
int main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int sub =a-b;
    int mul =a*b;
    if(sum>sub&&sum >mul)
    {
        printf("%d",sum);
    }else if(sub>sum&&sub>mul)
    {
        printf("%d",sub);
    }else
    {
        printf("%d",mul);
    }
    return 0;
}
