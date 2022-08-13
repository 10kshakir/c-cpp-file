#include <stdio.h>
struct frac {
    int nom ;
    int denom;
};
struct frac input()
{
    struct frac a;
    scanf("%d %d",&a.nom,&a.denom);
    return a;

}
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
struct frac sub(struct frac a,struct frac b)
{
   struct frac c;
    c.nom=(a.nom*b.denom)-(b.nom*a.denom);
    c.denom =a.denom*b.denom;
    return c;
}
struct frac multi(struct frac a,struct frac b)
{
    struct frac c;
    c.denom =a.denom*b.denom;
    c.nom =a.nom*b.nom;
    return c;

}
struct
struct frac divide(struct frac a,struct frac b)
{
    struct frac c;
    c.nom =a.nom*b.denom;
    c.denom =a.denom*b.nom;
    return c;

}
void print(struct frac b)
{
    printf("%d/%d",b.nom,b.denom);
}
int main()
{
      struct frac a=input();
    a=reduce(a);
    struct frac b=input();
    b=reduce(b);
    print(a);
    printf(" - ");
    print(b);
    printf(" =");
    struct frac c=sub(a,b);
    c=reduce(c);
    print(c);
    return 0;
}
