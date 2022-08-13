#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
struct frac{
    int  nom ;
    int denom;
};
int gcd(int a,int b)
{
    while (b>0)
    {
        int temp =a%b;
        a =b;
        b= temp;
    }
    return a;
}
struct frac reduce(struct frac a)
{
    int g=gcd(a.nom,a.denom);
    a.nom=a.nom/g;
    a.denom=a.denom/g;
    return a;


}
bool compare(struct frac a,struct frac b)
{
    a=reduce(a);
    b=reduce(b);
    a.denom=abs(a.denom);
    a.nom=abs(a.nom);
    b.denom=abs(b.denom);
    b.nom=abs(b.nom);

    if(a.denom==b.denom&&a.nom==b.nom)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    struct frac a={1,2};
    struct frac b={-1,-4};
    printf("%d",compare(a,b));
    return 0;
}
