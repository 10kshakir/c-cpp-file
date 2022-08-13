#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int count_1 =0;
    int count_2=0;
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90) count_1++;
        if(str[i]>=97&&str[i]<=122) count_2++;
    }
    if(count_1==count_2||count_1<count_2)
    {
        for(int i =0;i<strlen(str);i++)
        {
            str[i]=tolower(str[i]);
        }
    }else{
        for(int i =0;i<strlen(str);i++)
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}
