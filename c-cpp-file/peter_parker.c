#include <stdio.h>
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
void printDate(struct Date d)
{
    printf("%d-%d-%d\n",d.day,d.month,d.year);
}
void printStudent(struct Student st)
{
    printf("name  : %s\n",st.name);
    printf("Class :%d\n",st.class);
    printf("roll  :%d\n",st.roll);
    printf("dob   :");
    printDate(st.dob);

}

int main()
{
    struct Student st1={ .class =4,.roll =23,.dob ={10,16,1982}};
    strcpy(st1.name,"Peter Parker");
    printStudent(st1);
    return 0;
}
