#include <stdio.h>
int main()
{
    int i =100;
    int sum =0;
    while (i>0)
    {
        sum+=i;
        i-=3;
    }
    printf("%d",sum);
    return 0;
}
