#include <stdio.h>
int main()
{

    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    int area =n*m;
    int sq =2*(a*a);
    printf("%d",area-sq);
}
