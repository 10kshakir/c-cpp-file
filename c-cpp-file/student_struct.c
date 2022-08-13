#include <stdio.h>
#include <string.h>
struct Date{
    int day;
    int month;
    int year;
};
struct students{
    char name[100];
    int roll;
    int clas;
    struct Date dob;
};
void printDate(struct Date date)
{
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}

void printStudent(struct students st)
{
    printf("name :%s\n",st.name);
    printf("roll :%d\n",st.roll);
    printf("class:%d\n",st.clas);
    printf("dob  :");
    printDate(st.dob);
}

int main()
{
    char name[]="Ahmad Shakir";
    struct students st1={
        .roll =7,
        .clas=10,
        .dob={2,1,1999}

        };
    strcpy(st1.name,name);
    printStudent(st1);

    return 0;
}
