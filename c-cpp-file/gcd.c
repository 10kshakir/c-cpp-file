#include <stdio.h>
int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    while(a!=0){
        int rem=a%b;
        b=a;
        a=rem;

    }
    printf("gcd = %d",b);
    return 0;
}
