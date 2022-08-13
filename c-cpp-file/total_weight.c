#include <stdio.h>
int main(){
    float weight_1,num_1,weight_2,num_2,total,total_num,avarage;
    printf("Enter the weight of item 1:");
    scanf("%f",&weight_1);
    printf("Enter the number of item 1:");
    scanf("%f",&num_1);
    printf("Enter the weight of item 2:");
    scanf("%f",&weight_2);
    printf("Enter the number of item 2:");
    scanf("%f",&num_2);
    total =weight_1*num_1+weight_2*num_2;
    total_num=num_1+num_2;
    printf("Avarage :%f",total/total_num);


    return 0;
}
