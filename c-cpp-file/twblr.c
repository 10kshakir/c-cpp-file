#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int followers = 2*a+100;
    int remaining = followers -b;
    printf("%d",remaining);
    return 0;
}
