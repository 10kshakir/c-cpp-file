#include <stdio.h>
struct Student
{
    char name[100];
    int roll;
    int mark;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student highest={.mark=0};
    for(int i =0;i<n;i++)
    {
        struct Student a;
        scanf("%s %d %d",&a.name,&a.roll,&a.mark);
        if(a.mark>highest.mark)
        {
            highest =a;
        }
    }
    printf("highest is name %s roll %d mark %d",highest.name,highest.roll,highest.mark);
    return 0;
}
