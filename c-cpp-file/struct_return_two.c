#include <stdio.h>
struct pair{
    int x;
    int y;
};

struct pair divide(int a,int b)
{
        int bagfol =a/b;
        int vagshes =a%b;
        return (struct pair){bagfol,vagshes};
}

int main()
{
    int a =10,b=3;
    struct pair result =divide(a,b);
    printf("%d %d",result.x,result.y);

    return 0;
}
