#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
struct students{
    char name[100];
    int roll ;
    int clas ;
    struct Date dob;
};
struct Date getDob()
{
        struct Date d;
        scanf("%d%d%d",&d.day,&d.month,&d.year);
        return d;
}
struct students getinfo()
{
    struct students st;

    printf("enter name:");
    gets(st.name);gets(st.name);

    printf("enter roll :");
    scanf("%d",&st.roll);

    printf("enter class:");
    scanf("%d",&st.clas);
    st.dob=getDob();
    return st;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct students student[n];
    for(int i =0;i<n;i++)
    {
        student[i]=getinfo();
    }


    return 0;

}
