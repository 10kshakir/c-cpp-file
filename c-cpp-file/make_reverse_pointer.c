#include <stdio.h>
#include <stdlib.h>
int * makeReverse(int n, const int a[])
{
    int *b=(int*)malloc(n*sizeof(int));
    for(int i =0,j=n-1;i<n;i++,j--)
    {
        b[i]=a[j];
    }
    return b;
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
    int *b=makeReverse(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
