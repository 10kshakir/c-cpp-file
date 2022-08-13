#include <stdio.h>
struct plane{
    double  x ;
    double y;
};
struct plane midpoint(struct plane a,struct plane b)
{
    struct plane c ;
    double f=(a.x+b.x)/2;
    double g=(a.y+b.y)/2;
    c.x =f;
    c.y= g;
    return c;

};
int main()
{
    struct plane a ={5,-4};
    struct plane b ={-4,-2};
    struct plane c=midpoint(a,b);
    printf("%.2lf %.2lf",c.x,c.y);
}
