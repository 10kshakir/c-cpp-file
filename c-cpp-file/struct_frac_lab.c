#include <stdio.h>
struct fraction{
    int nom;
    int denom;
};

struct fraction inverse(struct fraction d)
{
    struct fraction c;
    c.nom=d.denom;
    c.denom =d.nom;
    return c;

}
int main()
{
    struct fraction a = {2,3};
    struct fraction b=inverse(a);
    printf("%d /%d\n",a.nom,a.denom);
    printf("%d /%d",b.nom,b.denom);
}
