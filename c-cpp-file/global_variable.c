#include <stdio.h>
int number ;
void set(int v)
{
    number=v;
}
void make_double()
{
    number=number*2;
}

void print()
{
    printf("%d\n",number);
}

int main()
{
    set(10);
    set(5);

    print();
    make_double();
    make_double();
    print();
    return 0;
}



