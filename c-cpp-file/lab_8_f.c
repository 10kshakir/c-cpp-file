#include <stdio.h>
int main()
{
    int a=9;
    int *p =&a;
    int **q=&p;
    int ***r=&q;
    ***r=100;

    printf("%d",a);
    return 0;
}
