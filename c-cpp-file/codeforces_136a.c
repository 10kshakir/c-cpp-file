#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int friends[n];
    int gifts[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&friends[i]);
    }

    for(int i =1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==friends[j])
            {
               gifts[i-1]=j+1;

            }
        }
    }
    for(int i =0;i<n;i++)
    {
        printf("%d ",gifts[i]);
    }
    return 0;
}
