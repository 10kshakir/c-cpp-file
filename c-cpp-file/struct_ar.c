#include <stdio.h>
struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};
struct Student input_stu()
{
    struct Student a;
    scanf("%s %d %d %c %d",&a.name,&a.marks,&a.roll,&a.section,&a.whichClass);

    return a;
}
void prin_stu(struct Student a)
{
    printf("%s %d %d %c %d\n",a.name,a.marks,a.roll,a.section,a.whichClass);
}
int main()
{
    struct Student a[3];
    for(int i =0;i<3;i++)
    {
        a[i]=input_stu();

    }
    struct Student highest =a[0];
     struct Student lowest =a[0];
     for(int i =0;i<3;i++)
     {
         if(a[i].marks>highest.marks) highest=a[i];
         if(a[i].marks<lowest.marks)  lowest =a[i];
     }
     printf("\n");
     printf("Highest-");
     prin_stu(highest);
     printf("Lowest-");
     prin_stu(lowest);

    return 0;
}
/*
"Akib" 91 29 C 9
"Sakib" 99 31 D 9
"Rakib" 57 45 D 9

*/
