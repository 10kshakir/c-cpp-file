#include <stdio.h>
double rectangular(double height,double width)
{
    return height*width;
}
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double area=rectangular(a,b);
    printf("%.2lf",area);
}
