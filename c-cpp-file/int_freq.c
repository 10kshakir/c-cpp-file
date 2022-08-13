#include <stdio.h>
int main()
{
    int n=6;
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count[11]={0};
    for(int i =0;i<6;i++)
    {
        int val =a[i];
        count[val]++;
    }
    for(int i =0;i<11;i++)
    {
        if(count[i]>0)
        {
            printf("%d comes %d times\n",i,count[i]);
        }
    }
    return 0;
}
