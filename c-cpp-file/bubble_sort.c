#include <stdio.h>
void swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int n,int a[])
{
    for(int  i =0;i<n-1;i++)
    {
        for(int j =i+1;j<n-2;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    return 0;
}
