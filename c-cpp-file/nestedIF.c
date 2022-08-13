#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b!=0){
        printf("remainder is %d\n",a%b);
        if(a%b ==0){
            printf("%d is divisible by %d",a,b);
        }else{
            printf("%d is not divisible by %d",a,b);
        }
    }else{
        printf("a number can't be divided by Zero");
    }
    return 0;
}
