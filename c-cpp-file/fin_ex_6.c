#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a =1;
    while(n--)
    {
        if(a<k)
        {
            a*=2;
        }else{
            a+=k;
        }
    }
    printf("%d",a);
    return 0;
}
