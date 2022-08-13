#include <stdio.h>
#include <string.h>
int main()
{
    char  str[201];
    gets(str);
    int len =strlen(str);
    int indx =0;
    while (indx<len)
    {
        if(str[indx]=='.')
        {
            printf("0");
            indx++;
        }else if(str[indx]=='-'&&str[indx+1]=='.')
        {
            printf("1");
            indx+=2;
        }else if(str[indx]=='-'&&str[indx+1]=='-')
        {
            printf("2");
            indx+=2;
        }
    }
    return 0;
}
