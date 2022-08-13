#include <stdio.h>
struct Student
{
    int roll;
    int class;
    int marks;
};
int main()
{
    int n ;
    scanf("%d",&n);
    struct Student st[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d%d%d",&st[i].roll,&st[i].class,&st[i].marks);
    }
    int total=0;
    for(int i =0;i<n;i++)
    {
        total+=st[i].marks;
    }
    printf("%d",total);
}
