#include <stdio.h>

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
struct frac fahr_toc_cel(struct frac a)
{
    struct frac b ={32,1};
    struct frac x ={5,9};
    struct frac c =sub(a,b);
    struct frac d =multi(c,x);
    return d;

}
void print(struct frac b)
{
    printf("%d/%d",b.nom,b.denom);
}
int main()
{
    struct frac b ={69,2};
    struct frac c =fahr_toc_cel(b);
    c=reduce(c);
    print(c);
    return 0;
}
