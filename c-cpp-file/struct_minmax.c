#include <stdio.h>
struct minmax{
    int min;
    int max;
};
struct minmax minMax(int a,int b)
{
    struct minmax result;
    if (a>b) {
        result.max=a;
        result.min=b;
    }else{
        result.max=b;
        result.min =a;
    }
    return result;
};
int main()
{
    int a=5,b=3;
    struct minmax c=minMax(a,b);
    printf("%d %d",c.max,c.min);
    return 0;
}
