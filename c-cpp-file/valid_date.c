#include <stdio.h>
#include <stdbool.h>
struct Date {
	int day;
	int month;
	int year;
};
int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
bool isLeapYear(int year)
{
    if((year % 4==0)&& (year %100 != 0|| year %400 ==0)){
       return true;
    }else{
        return false;
    }
}
 bool isValidDate(struct Date date){
     int leap =isLeapYear(date.year);
     if(leap==1)
     {
         months[1]=29;
     }else{
        months[1]=28;
     }
     if(date.month<=12&&date.day<=months[date.month-1])
     {
         return true;
     }else{
        return false;
     }


 }
int main()
{

    printf("%d",isValidDate( (struct Date) {29, 2, 2004} ) );

    return 0;
}
