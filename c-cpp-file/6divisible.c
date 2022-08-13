#include <stdio.h>
int main()
{
    for(int i =1;i<=60;i++)
    {
        if(60%i ==0) continue;
        printf("%d\n",i);
    }
    return 0;
}
