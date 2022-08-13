#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int num[n];
    for (int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    int max =0;
    for(int i =0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    int sum =0;
    for(int  i= 0;i<n;i++)
    {
        int temp =max -num[i];
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
