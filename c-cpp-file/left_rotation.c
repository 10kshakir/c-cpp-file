#include <stdio.h>
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i =0;i<d;i++)
    {
        int temp =num[0];
        for(int j =0;j<n-1;j++)
        {
            num[j]=num[j+1];
        }
        num[n-1]=temp;
    }
    for(int i =0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
