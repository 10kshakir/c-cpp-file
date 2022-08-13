#include <stdio.h>
struct date{
    int day ;
    int month;
    int year;
    char *str;
};
int main()
{
    struct date date1 ={2,1,1998,};
    date1 =(struct date) {1,1,1999,};

    printf("%d-%d-%d  %s\n",date1.day,date1.month,date1.year,date1.str);

}
