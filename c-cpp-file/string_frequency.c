#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int count[26]={0};
    int len =strlen(str);
    for (int i =0;i<len;i++)
    {
        int value = str[i];
        count[value-97]++;

    }
    for(int i =0;i<26;i++)
    {
        if(count[i]>0)
        {
            printf("%c comes %d time\n",i+97,count[i]);
        }
    }
    return 0;
}
