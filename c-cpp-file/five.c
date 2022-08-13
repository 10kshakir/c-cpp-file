#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int difference=a-b;
    if(a==5||b==5){
        printf("True");
    }else if(sum==5){
        printf("True");
    }else if(difference==5){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
