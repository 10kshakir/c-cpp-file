#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *pt =a;
    for(int i =0;i<6;i++)
    {
        printf("%d ",*pt);
        pt++;
    }
    return 0;
}
