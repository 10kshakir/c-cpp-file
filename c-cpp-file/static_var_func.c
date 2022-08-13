#include <stdio.h>
//void add(int a,int b)
//{
//    static int ad =0 ;
//    ad++;
//
//
//    printf("%d \n",ad);
//
//}
//int main()
//{
//    add(10,10);
//    add(5,5);
//
//    return 0;
//}
void foo()
{
    static int x = 5;
    x++;
    printf("%d", x);
}

int main()
{
    foo();
    foo();
    return 0;
}
