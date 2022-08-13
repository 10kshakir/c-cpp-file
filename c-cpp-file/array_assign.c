#include <stdio.h>
int main()
{
    int num[]={2,3,4,5,6,7};
    num[6]=8;
    int sz =sizeof(num)/sizeof(num[0]);
    for(int  i =0;i<sz;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}
