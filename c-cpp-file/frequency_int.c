#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int n[10]={0};
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            int val =str[i]-48;

            n[val]++;
        }
    }
    for(int i =0;i<10;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}
