#include <stdio.h>
struct dates{
    int day;
    int month;
    int year;
};
int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void printDate(struct dates date)
{
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}
struct dates nextdate(struct dates date)
{
    struct dates next=date;
    if(next.day!=months[next.month-1]) //check if the day is the last of month
        {
            next.day++;
        }else if(next.month!=12)   //check if the month is the last
        {
            next.day =1;
            next.month +=1;
        }else                       // if both are the last day and month
        {
            next.day=1;
            next.month=1;
            next.year+=1;
        }
        return next;

}

int main()
{
    printf("Enter today date:");
    struct dates today;
    scanf("%d %d %d",&today.day,&today.month,&today.year);
    int n;
    printf("enter next how many days:");
    scanf("%d",&n);
    struct dates curr=today;
    for(int i =0;i<n;i++)
    {
        curr =nextdate(curr);
        printDate(curr);
    }


    return 0;
}
