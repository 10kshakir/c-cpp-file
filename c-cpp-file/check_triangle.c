#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int angle_one = a+b;
    int angle_two = b+c;
    int angle_three =a+c;
    if(angle_one>c&&angle_two>a&&angle_three>b){
        printf("Triangle is valid ");
    }else{
        printf("Triangle is not valid ");

    }
    return 0;
}
