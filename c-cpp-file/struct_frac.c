#include <stdio.h>
struct fraction{
    int nom;
    int denom;
};
int gcd(int a,int b)
{
    while(b>0)
    {
        int temp =a%b;
        a=b;
        b=temp;
    }
    return a;
}
struct fraction reduce (struct fraction a)
{
    int gc =gcd(a.nom,a.denom);
    a.nom/=gc;
    a.denom/=gc;
    return a;
}
struct fraction input()
{
    struct fraction a;
    scanf("%d %d",&a.nom,&a.denom);
    return a;

}
struct fraction f_of_two_num(struct fraction a,struct fraction b)
{
    struct fraction c;
    c.nom=(a.nom*b.denom)+(b.nom*a.denom);
    c.denom =a.denom*b.denom;
    return c;

}
void print(struct fraction b)
{
    printf("%d/%d",b.nom,b.denom);
}


int main()
{
//    struct fraction a={2,4};
//    struct fraction b={3,4};
//    struct fraction c=f_of_two_num(a,b);
//    print(c);
    struct fraction a=input();
    a=reduce(a);
    struct fraction b=input();
    b=reduce(b);
    print(a);
    printf(" + ");
    print(b);
    printf(" =");
    struct fraction c=f_of_two_num(a,b);
    c=reduce(c);
    print(c);
    return 0;
}
