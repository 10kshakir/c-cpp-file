#include<stdio.h>
int main(){
 float num,w1,num1,w2,total,avarage;
 scanf("%f",&w1);
 scanf("%f",&num);
 scanf("%f",&w2);
 scanf("%f",&num1);
 total = w1*num+w2*num1;
 avarage = num+num1;
 printf("%f",total/avarage);
 return 0;
}
