#include <stdio.h>
int *square(int n)
{
    int *s=(int* )malloc(n*(sizeof(int)));
    for(int i =0;i<n;i++)
    {
        s[i]=i*i;
    }
    return s;
}
int main()
{
    int n ;
    scanf ("%d",&n);
    int *sq;
    sq=square(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",sq[i]);
    }
    return 0;
}
