#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len =strlen(str);
    for(int i =0;i<len;i++)
    {
        str[0]=toupper(str[0]);
        str[i+1]=str[i+1];
    }
    printf("%s",str);

    return 0;
}
