#include <stdio.h>
void sort(int a[],int n)
{
    for(int pos = 0;pos<n-1;pos++)
    {
        for(int check =pos+1;check<n ;check++)
        {
            if(a[check]<a[pos])
            {
                int temp =a[pos];
                a[pos]=a[check];
                a[check]=temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i =0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        int dif =200000000;
        for(int i =0;i<n-1;i++)
        {
            if(dif>a[i+1]-a[i])
            {
                dif=a[i+1]-a[i];
            }
        }
        printf("%d\n",dif);
    }

    return 0;
}
