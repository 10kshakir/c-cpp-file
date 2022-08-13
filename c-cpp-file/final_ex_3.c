#include <stdio.h>
struct Fun
{
    int sum;
};
int main()
{
    struct Fun a ={5};
    struct Fun *p =&a;
    p->sum = 10;
    printf("%d",a.sum);
    return 0;
}
