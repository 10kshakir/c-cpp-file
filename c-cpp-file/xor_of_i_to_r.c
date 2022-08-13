#include <stdio.h>
int main()
{
    int l,r;
    scanf ("%d%d",&l,&r);
    int xor =l;
    for(int i =l+1;i<=r;i++)
    {
        xor =xor^i;
    }
    printf("%d",xor);

    return 0;
}
