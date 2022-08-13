#include <stdio.h>
struct Student
{
    char name[100];
    int roll;
    int mark;
};
int main()
{
    struct Student st[3];
    for(int i =0;i<3;i++)
    {
        scanf("%s%d%d",&st[i].name,&st[i].roll,&st[i].mark);
    }
    printf("\n");
    for(int i =0;i<3;i++)
    {
        printf("%s %d %d\n",st[i].name,st[i].roll,st[i].mark);
    }
    return 0;
}
