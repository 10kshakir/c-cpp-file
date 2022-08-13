#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum = 0;
    if(a>sum)   sum=a;
    if(b>sum)   sum=b;
    if(c>sum)   sum=c;
    if(d>sum)   sum=d;

    if (a<sum)  printf("%d\n",sum-a);
    if (b<sum)  printf("%d\n",sum-b);
    if (c<sum)  printf("%d\n",sum-c);
    if (d<sum)  printf("%d\n",sum-d);
    return 0;
}
