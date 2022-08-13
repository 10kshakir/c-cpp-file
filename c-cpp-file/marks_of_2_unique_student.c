#include <stdio.h>
struct Student
{
    char name[100];
    int id;
    int mark;

};
struct unique_stu
{
    char name[100];
    int id;
    int total_mark;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct unique_stu rakib={"rakib",56,0};
    struct unique_stu sakib={"sakib",46,0};
    struct Student students[n];
    for(int i =0;i<n;i++)
    {
        scanf("%s%d%d",&students[i].name,&students[i].id,&students[i].mark);
        if(students[i].id==rakib.id)
        {
            rakib.total_mark+=students[i].mark;
        }else{

            sakib.total_mark+=students[i].mark;
        }
    }
    printf("%s %d %d\n%s %d %d",rakib.name,rakib.id,rakib.total_mark,sakib.name,sakib.id,sakib.total_mark);
    return 0;
}
