#include<stdio.h>
int main(){
    float fahrenheit ,celsius ;
    printf("Temperature in fahrenheit  =");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("Temperature in celsius %.2f C",celsius );
    return 0;
}
