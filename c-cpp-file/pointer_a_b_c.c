#include <stdio.h>
int main()
{
    int x;double y;char z;
   int *a=&x;
    double *b=&y;
    char* c =&z;
    printf("%lld %lld\n",a,a+1);
    printf("%lld %lld\n",a,a-2);
    printf("%lld %lld\n",b,b+3);
    printf("%lld %ll\n",b,b-4);
    printf("%lld %lld\n",c,c-5);
    printf("%lld %lld\n",c,c+6);


}
