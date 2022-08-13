#include <stdio.h>
#include <string.h>
int main()
{
    int n =5;
    int a[n];
    memset(a,1,sizeof(a));
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
