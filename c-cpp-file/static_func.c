#include <stdio.h>
void print_call( )
{
    static int  i=0;
    i++;
    printf("called %d times\n",i);
}
int main()
{
    print_call();
    print_call();
    print_call();
    return 0;
}
