#include <stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",square(n));
    return 0;
}
