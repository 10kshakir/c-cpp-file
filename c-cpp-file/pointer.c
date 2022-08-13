#include <stdio.h>
int main()
{
    int num=100;
    int* value =&num;
    printf("%d\n",*value);
    *value = 200;
    printf("%d\n",num);
    int num_1= 50;
    value =&num_1;
    printf("%d\n",*value);
    return 0;
}
