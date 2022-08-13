#include <stdio.h>
#include <math.h>
int getroot(double a,double b,double c,double *root1,double *root2)
{
    double d =b*b-4*a*c;
    if(d<0)
    {
        return 0;
    }else if(d==0)
    {
        return 1;
        *root1=(-b)/2*a;
    }else
    {
        *root1= (-b+sqrt(d))/2*a;
        *root2= (-b-sqrt(d))/2*a;
        return 2;
    }
}
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double root1,root2;
    int root =getroot(a,b,c,&root1,&root2);
    if(root>=1)printf("%lf\n",root1);
    if(root2==2)printf("%lf\n",root2);

    return 0;
}
