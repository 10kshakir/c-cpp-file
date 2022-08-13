#include <stdio.h>
#include <string.h>
int main()
{
    int num[5];
    int len = sizeof(num)/sizeof(num[0]);

    for(int i =0;i<len;i++)
    {
        scanf("%d",&num[i]);
    }

    int sum =0;
    for (int i = 0;i<len;i++)
    {
            sum+=num[i];
    }
    printf("%d",sum);
    return 0;
}
