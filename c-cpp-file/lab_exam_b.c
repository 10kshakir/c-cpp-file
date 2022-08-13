#include <stdio.h>
float make_average(int n ,int a[])
{
    int sum =0;
    for(int i =0;i<n;i++)
    {
        sum+=a[i];
    }
    sum=sum/n;
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    float ava= make_average(5,a);
    printf("%f",ava);
}
