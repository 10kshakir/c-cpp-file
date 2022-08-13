#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=0;
    int sec_max=0;
    for(int i =0;i<n;i++)
    {
        if(num[i]>max)
        {
            max =num[i];
        }
    }
    for(int i =0;i<n;i++)
    {
        if(max>num[i]&&num[i]>sec_max)
        {
            sec_max=num[i];
        }

    }

    printf("%d",sec_max);
    return 0;
}
