#include <stdio.h>
struct sum_and_sub
{
    int sum;
    int sub;
};
struct sum_and_sub return_math(int a,int b)
{
    struct sum_and_sub c;
    c.sum =a+b;
    c.sub=a-b;
    return c;
}
int main()
{
    int a =5,b=3;
    struct sum_and_sub c =return_math(a,b);
    printf("%d+%d =%d\n",a,b,c.sum);
    printf("%d-%d =%d\n",a,b,c.sub);
    return 0;
}
