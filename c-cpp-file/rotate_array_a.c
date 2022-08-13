#include <stdio.h>
void rotate(int n,int a[])
{
    int first = a[0];
    for(int i =0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=first;
}
void rotate_k(int n,int num,int k)
{
     k =k%n;

    for(int i =0;i<k;i++)
    {
        rotate(n,num);
    }

}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    rotate_k(n,num,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
