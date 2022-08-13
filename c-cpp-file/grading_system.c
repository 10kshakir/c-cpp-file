#include <stdio.h>
#include <stdbool.h>

int main(){
    int number_of_subjects;
    scanf("%d",&number_of_subjects);
    int  point_sum=0;
    int grade_point=0;
    bool is_fail= false;
    for(int i =1;i<=number_of_subjects;i++)
        {
          int num;
          printf("Enter subject mark :");
          scanf("%d",&num);
          if(num>=80 && num<=100){
            printf("Your grade is A+\n");
             grade_point=5;
          }else if(num>=70 && num<80){
            printf("Your grade is A\n");
             grade_point =4;
          }else if (num>=60 && num<70){
            printf("Your grade is B\n");
             grade_point =3;
          }else if(num>=50 && num<60){
            printf("your grade is c \n");
             grade_point =2;
          }else if (num >=40 && num <50){
            printf("Your grade is D\n");
            grade_point =1;
          }else {
            printf("you failed \n");
            grade_point =0;
            is_fail=true;
          }


         point_sum+=grade_point;

        }
        if(is_fail){
            printf("you have failed the exam\n");
              printf("your gpa is 0.0");
        }else{

            double gpa = (double)point_sum/number_of_subjects;
            printf("gap is %.2lf",gpa);
        }
}
