#include <stdio.h>
int main(){
    double radius ,perimeter,area;
    const double PI =3.1416;
    printf("please enter the radius : \n");
    scanf("%lf",&radius);
    perimeter = 2*PI*radius;
    area = PI*(radius*radius);
    printf("area is %.2lf \n",area);
    printf("perimeter is %.2lf \n",perimeter);
    return 0;
}
