#include <stdio.h>
//void makeDouble(int *n)
//{
//    *n *=2;
//}
void swap(int* x,int* y)
{
    int tmp =*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d is a,%d is b",a,b);

    return 0;
}
