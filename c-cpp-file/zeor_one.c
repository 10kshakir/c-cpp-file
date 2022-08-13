#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100000];
    scanf("%s",str);
    int len =strlen(str);
    int one =0;
    int zero =0;
    for(int i =0;i<len;i++)
    {
        if(str[i]=='n')one++;
        if(str[i]=='z')zero++;
    }
    for(int i =0;i<one;i++)
    {
        printf("1 ");
    }
    for(int i =0;i<zero;i++)
    {
        printf("0 ");
    }
    return 0;
}
