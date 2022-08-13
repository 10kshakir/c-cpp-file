#include <stdio.h>
int main()
{
    int i = 2;
    int sum = 0;
    int j=1;
    while(j<=10)
    {
        sum+=i;
        i+=3;
        j++;
    }
    printf("%d",sum);
    return 0;
}
