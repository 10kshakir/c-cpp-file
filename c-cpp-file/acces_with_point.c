#include <stdio.h>
int main()
{
    int a =10;
    int *p =&a;
    int **q=&p;
//    printf("%d\n",a);
//    printf("%lld\n",p);
//    printf("%lld\n",*q);
    **q=100;
    printf("%d\n",q);
    return 0;
}
