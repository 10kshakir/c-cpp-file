#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c&&c==a){
        printf("This is an Equilateral triangle.");
    }else if(a==b||a==c||b==c){
        printf("This is an isosceles triangle.");
    }else if(a!=b&&a!=c&&b!=c){
        printf("This is an Scalene triangle.");
    }
    return 0;
}
