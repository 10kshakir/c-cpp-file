#include <stdio.h>
int fib(int n)
{
    if ( n ==1) return 1;
    int small = fib(n-1);
    int total= small+n;
    return total ;
}
int fib_arr(int *a,int ind,int size)
{
    if(ind ==size) return 0;
    int small = fib_arr(a,ind+1,size);
    int total = small+a[ind];
    return total;
}
int fib_arr1(int *a,int size)
{
    if(size == 0) return 0;
    int small = fib_arr1(a+1,size-1);
    int total = small+a[0];
    return total;
}
int main()
{
    int a[]={1,2,3,4,5};

    int n =fib_arr1(a,5);
    printf("%d",n);

    return 0;
}
