#include <stdio.h>
void rotate_array(int n,int d,int num[])
{
     int temp[d];
    for(int i =0;i<d;i++)
    {
        temp[i]=num[i];
    }

    int temp1[n-d];
    for(int i =0;i<n-d;i++)
    {
        temp1[i]=num[i+d];
    }
    for(int i =0;i<n-d;i++)
    {
        num[i]=temp1[i];
    }
    for(int i =n-d;i<n;i++)
    {
        num[i]=temp[i-(n-d)];
    }

}
int main()
{
    int n ,d;
    scanf("%d%d",&n,&d);
    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    rotate_array(n,d,num);
    for(int i =0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
