#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    unsigned int xor= 1;
    for(int i =2;i<=n;i++)
    {
        xor =xor^i;
    }
    printf("%d",xor);

    return 0;
}
