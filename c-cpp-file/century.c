#include <stdio.h>
int main()
{
    double year;
    scanf("%lf",&year);
    double century =ceil(year/100);
    printf("%.0lf",century);
    return 0;
}
