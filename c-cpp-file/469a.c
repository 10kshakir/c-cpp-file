#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        a[i]=0;
     }
     int x;
     scanf("%d",&x);
     int p[x];
    for(int i =0;i<x;i++)
    {
        scanf("%d",&p[i]);
    }
    int y;
    scanf("%d",&y);
    int q[y];
    for(int i  =0;i<y;i++)
    {
        scanf("%d",&q[i]);
    }
    for(int i =0;i<x;i++)
    {
        int val=p[i];
        a[val-1]++;
    }
    for(int i =0;i<y;i++)
    {
        int val=q[i];
        a[val-1]++;
    }
    for(int i =0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

    return 0;
}
