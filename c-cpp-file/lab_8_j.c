#include <stdio.h>
void change_array(int n,int a[],int b[])
{
    int c[n];
    for(int i =n-1,j=0;i>=0;i--,j++)
    {
        c[j]=a[i];
    }
    for(int i =0;i<n;i++)
    {
        b[i]=c[i];
    }
}
int main()
{
    int n =5;
    int a[]={1,2,3,4,5};
    int b[5];
    change_array(n,a,b);
    for(int i =0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
