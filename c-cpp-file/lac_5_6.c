#include <stdio.h>
#include <string.h>
struct Date{
    int day;
    int month;
    int year;
};
struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};
int main()
{
    struct Student str={.roll=8};

    strcpy(str.name,"Ahmad Shakir");
    printf("name :%s roll :%d",str.name,str.roll);
    return 0;
}

