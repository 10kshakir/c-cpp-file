#include <stdio.h>
void reverse_array(int n,int a[])
{
    for(int i =0,j=n-1;i<j;i++,j--)
    {
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;

    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    reverse_array(5,a);
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
