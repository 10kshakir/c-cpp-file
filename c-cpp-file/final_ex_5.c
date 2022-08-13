#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s",&str);
    int count[10];
    for(int i =0;i<10;i++)
    {
        count[i]=0;
    }
    int len =strlen(str);
    for(int i =0;i<len ;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            int element = str[i];
            count[element-48]++;
        }
    }

    for(int i =0;i<10;i++)
    {
        if(count[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
