#include <stdio.h>
#include <string.h>
int main()
{
    char str[11]="hello";
    char str1[10]="world";
    strncat(str,str1,5);
    str[10]='\0';
    printf("%s",str);
    return 0;
}
