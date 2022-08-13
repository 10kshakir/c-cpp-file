#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max =a[0];
    for(int i =0;i<n;i++)
    {
        if(a[i]>max) max =a[i];

    }
    int n1=max+1;
    int count[n1];
    memset(count,0,sizeof(count));
    for(int i =0;i<n;i++)
    {
        int val =a[i];
        count[val]++;

    }
    for(int i =0;i<n1;i++)
    {
        if(count[i]>1)
        {
            printf("%d is the duplicate number\n",i);
        }
    }
    return 0;
}
