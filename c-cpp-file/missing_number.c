#include <stdio.h>
int main()
{
    int n ;
    scanf ("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count[100]={0};
    for(int i =0;i<n;i++)
    {
        int value =a[i];
        count[value-1]++;
    }
    for(int i =0;i<100;i++)
    {
        if(count[i]==0)
        {
            printf("%d is missing\n",i+1);
        }
    }
    return 0;
}
