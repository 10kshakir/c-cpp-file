#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum =0;
    while(n>0){
        int rem=n%10;
        n/=10;
        sum=sum*10+rem;

    }
    printf("%d",sum);
}
