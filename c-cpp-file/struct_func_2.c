#include <stdio.h>
struct Student
{
    char name[100] ;
    int roll;
    int mark;
};
struct Student input_student()
{
    struct Student a;

    scanf("%s%d%d",&a.name,&a.roll,&a.mark);
    return a;
}
void print_struct_Student(struct Student a)
{
    printf("%s %d %d \n",a.name ,a.roll,a.mark);
}
void fun(struct Student *a)
{
    (*a).mark=100;
}
int main()
{
    struct Student st =input_student();

    fun(&st);
    print_struct_Student(st);

}
