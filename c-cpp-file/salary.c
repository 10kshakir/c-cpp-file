#include <stdio.h>
int main(){
    int per_hour,working_hour;
    printf("Input the working hrs:");
    scanf("%d",&working_hour);
    printf("Salary amount/hr:");
    scanf("%d",&per_hour);
    float salary =(float)working_hour*(float)per_hour;
    printf("Monthly Salary :%.2f",salary);
    return 0;

}
