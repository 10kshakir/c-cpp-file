#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    double sum = 0;
    for (int i =1;i<=num;i++){
        double a,b;
        scanf("%lf %lf",&a,&b);
        double multipication =a*b;
        sum +=multipication;
    }
    printf("%.3lf",sum);

    return 0;
}
