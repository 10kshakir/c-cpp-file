#include <stdio.h>
int main()
{
    double i;
    scanf("%lf",&i);
    double result = round(i);
    printf("%.0lf",result);
    return 0;
}
