#include <stdio.h>
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
    int min =a[0];
    int amaz =0;
    for(int i =0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            amaz++;
        }
        if(a[i]<min)
        {
            min=a[i];
            amaz++;
        }
    }
    printf("%d",amaz);
    return 0;
}
