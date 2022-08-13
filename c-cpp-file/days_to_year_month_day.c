#include <stdio.h>
int main(){
    int days,year,month,day;
    printf("Input no. of days:");
    scanf("%d",&days);
    year=days/365;
    month=(days-365*year)/30;
    day=days-(365*year+30*month);
    printf("Year(s) %d\n",year);
    printf("Month(s) %d\n",month);
    printf("day(s) %d\n",day);
    return 0;
}
