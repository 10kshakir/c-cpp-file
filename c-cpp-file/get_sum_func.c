#include <stdio.h>
int get_sum(int a[],int n)
{
    int sum =0;
    for(int i =0 ;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int c =get_sum(a,5);
    printf("%d",c);
    return 0;
}
