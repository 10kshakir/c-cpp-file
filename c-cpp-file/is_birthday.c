#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct Date {
	int day;
	int month;
	int year;
};

struct Student{
	char name[100];
	int class;
	int roll;
	struct Date dob;
};
bool isBirthday(struct Date date, struct Student student)
{
    if(date.year>=student.dob.year&&date.day==student.dob.day&&date.month==student.dob.month)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    struct Date d={1,1,1999};
    struct Student st1={ .class =4,.roll =23,.dob ={1,1,2000}};
    strcpy(st1.name,"Peter Parker");
    printf("%d",isBirthday(d,st1));
    return 0;
}
