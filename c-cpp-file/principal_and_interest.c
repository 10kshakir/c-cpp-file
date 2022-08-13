#include<stdio.h>
int main(){
    float principal,time,rate;
    printf("Enter Principal:");
    scanf("%f",&principal);
    printf("Enter Time :");
    scanf("%f",&time);
    printf("Enter Rate:");
    scanf("%f",&rate);
    float simple_interest =principal*time*rate/100;
    printf("simple Interest =%f\n",simple_interest);
    printf("Principal + Interest =%.1f",principal+simple_interest);
    return 0;
}
