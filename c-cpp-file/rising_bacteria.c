#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int res=0;
    while(x>0)
    {
        if(x%2==1)
        {
            res++;
        }
        x/=2;
    }
    printf("%d",res);
    return 0;
}
