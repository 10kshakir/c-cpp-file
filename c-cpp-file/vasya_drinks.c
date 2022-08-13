#include <stdio.h>
int main()
{
    double boxes;
    scanf("%lf",&boxes);
    double sum =0;

    for(int i =1;i<=boxes;i++)
    {
        double  a;
        scanf("%lf",&a);
        double perchant =a/100;

        sum+=perchant;
    }
    double orange_perchant =(sum/boxes)*100;
    printf("%.12lf",orange_perchant);

    return 0;
}
