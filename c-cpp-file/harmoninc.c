#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    double sum = 1;
    for(int  i =1;i<=n;i++)
    {
        sum+=1/i;
    }
    printf("%lf",sum);

    return 0;
}
