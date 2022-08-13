#include <stdio.h>
struct sum{
    int sum[10];
};
struct sum arraysum(int n, int a[], int b[])
{
    struct sum c;
    for(int i =0;i<n;i++)
    {
        c.sum[i]=a[i]+b[i];
    }
    return c;

}
int main()
{
    int n =3;
    int a[]={1,2,3};
    int b[]={2,3,4};
    struct sum c =arraysum(n,a,b);
    for(int i =0;i<n;i++)
    {
        printf("%d ",c.sum[i]);
    }
    return 0;
}
