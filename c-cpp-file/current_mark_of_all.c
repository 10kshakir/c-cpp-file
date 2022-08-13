#include <stdio.h>
struct Student
{
    char name[100];
    int id;
    int mark;
    int totalMark;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i =0;i<n;i++)
    {
        scanf("%s%d%d",&students[i].name,&students[i].id,&students[i].mark);
        int sum =0;
        for(int j =0;j<i;j++)
        {
            if(students[i].id==students[j].id)
            {
                sum+=students[j].mark;
            }
        }
        sum=students[i].mark+sum;
        students[i].totalMark=sum;

    }
    for(int i =0;i<n;i++)
    {
        printf("%s %d %d %d\n",students[i].name,students[i].id,students[i].mark,students[i].totalMark);
    }
    return 0;
}
