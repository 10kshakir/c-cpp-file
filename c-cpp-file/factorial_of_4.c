#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int multipication = 1;
    for(int  i = 1;i<=n;i++)
    {
        multipication*=i;
    }
    printf("%d",multipication);
    return 0;
}
