#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum_1=a+b;
    int sum_2=b+c;
    int sum_3 =a+c;
    if(sum_1<sum_2&&sum_1<sum_3){
        printf("%d",sum_1);
    }else if(sum_2<sum_1&&sum_2<sum_3){
        printf("%d",sum_2);
    }else{
        printf("%d",sum_3);
    }
    return 0;
}
