#include <stdio.h>
void change_values(int a[],int n,int L,int R)
{
    for(int i =0;i<n;i++)
    {
        if(i>=L&&i<=R)
        {
            a[i]=0;
        }
    }
}
int main()
{
    int a[5];
    for(int i =0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    change_values(a,5,1,3);
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
