#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len =strlen(str);
    int count[26]={0};
    for(int i =0;i<len ;i++)
    {
        int value =str[i]-'a';
        count[value]++;
    }
    for(int i =0;i<26;i++)
    {
        if(count[i]>0)
        {
            printf("%c comes %d times\n",i+'a',count[i]);
        }
    }
    return 0;
}
