#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=n%10;
    n/=10;
    int b =n%10;
    n/=10;
    int a =n;

    int sum1=(a*100)+(b*10)+c;
    int sum2=(b*100)+(c*10)+a;
    int sum3=(c*100)+(a*10)+b;
    int total =sum1+sum2+sum3;
    printf("%d",total);

    return 0;
}
