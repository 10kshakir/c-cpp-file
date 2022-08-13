#include <stdio.h>
int main(){

    int students;
    printf("Enter the number of students :");
    scanf("%d",&students);
    int marks[students];
    for (int i = 0;i<students;i++){
        printf("Enter marks of no %d students:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i =0;i<students;i++){
        printf("no %d student got %d marks\n",i+1,marks[i]);
    }

    return 0;
}
