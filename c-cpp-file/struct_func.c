#include <stdio.h>
#include <stdbool.h>
struct Date{
    int day;
    int month;
    int year;
};

void printDate(struct Date date)
{
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}
bool isFirstDay(struct Date date)
{
    return date.day==1&&date.month==1;
}
int main()
{
    struct Date today =getFirstDate(1999);
    printDate(today);

    return 0;
}
