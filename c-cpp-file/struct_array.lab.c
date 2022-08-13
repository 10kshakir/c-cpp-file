#include <stdio.h>
struct arrayHolder{
    int num[100];

};
int main()
{
    int  n =10;
    struct arrayHolder d;
    for(int i =0;i<n;i++)
    {
        d.num[i]=i+1;
    }
    for(int  i =0;i<n;i++)
    {
        printf("%d ",d.num[i]);
    }
    return 0;
}
