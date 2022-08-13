#include  <stdio.h>
int max_array(int n,int num[])
{
    int max =num[0];
    for(int i =0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max =max_array(n,num);
    printf("%d",max);
}
