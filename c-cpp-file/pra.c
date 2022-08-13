#include <stdio.h>

int gcd(int a,int b)
{

     while(a!=0){
        int rem=b%a;
        b=a;
        a=rem;

    }
    return b;
}
int gcd_of_numbers(int n,int num[])
{

    int gc=0;
    for(int i =0;i<n;i++)
    {
         gc=gcd(gc,num[i]);
    }
    return gc;

}
int main(){
    int n =10;
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=gcd_of_numbers(n,a);
    printf("%d",b);
}
