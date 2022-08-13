#include <stdio.h>
int main()
{
//    int num =20;
//    int* pNum=&num;
//    printf("%lld\n",pNum);
//    pNum++;
//    printf("%lld\n",pNum);
    int a,b;
    int* pa=&a;
    int* pb =&b;
    printf("%lld and %lld\n",pa,pb);
    printf("differnce is %lld",pa-pb);
    return 0;
}
