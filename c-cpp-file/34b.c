#include <stdio.h>
#include <math.h>
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
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    int sum =0;
    for(int i =0;i<m;i++)
    {


        if (a[i] >= 0)
        {
            break;
        }
        sum += a[i];

    }
    sum =abs(sum);
    printf("%d",sum);


    return 0;
}
