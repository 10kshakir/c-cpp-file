#include <stdio.h>
int main(){

    int centigrade;
    printf("Enter temperature in Celsius =");
    scanf("%d",&centigrade);
    float Fahrenheit =((int)centigrade*9/5)+32;
    printf("Temperature in Fahrenheit = %.1f Fahrenheit",Fahrenheit);
    return 0;

}
