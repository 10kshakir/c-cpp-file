#include <stdio.h>
void swap(int *a,int *b)
{
    int temp =*a;
    *a =*b;
    *b=temp;
}
void sort(int n,int a[])
{
    for (int i =0;i<n;i++)
    {
        for(int j =0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
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
    sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i] );
    }
    return 0;
}
