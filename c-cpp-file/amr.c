#include  <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len =strlen(str);
    str[0]=toupper(str[0]);
    printf("%s",str);
    return 0;
}
