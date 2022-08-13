#include <stdio.h>
int main()
{
    int num[7];
    int len =sizeof(num)/sizeof(num[0]);
    for(int i = 0;i<len;i++)
    {
        scanf("%d",&num[i]);
    }
    int max = 0;
    int count=0;

    for(int i =0;i<len;i++)
    {
        if(num[i]>=max)
        {
            max =num[i];

        }

    }

    for(int i = 0;i<len;i++)
    {
        if(max ==num[i])
        {
            count++;
        }
    }

    printf("Maximum is %d\n",max);
    printf("Maximum occurs %d times",count);
    return 0;
}
