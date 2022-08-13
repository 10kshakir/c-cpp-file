#include <stdio.h>
#include <string.h>
int main()
{
    char str[10],str1[100];
    gets(str);
    gets(str1);
    strcat(str,str1);
    int com=strcmp(str,str1);

    printf("%d",com);
    return 0;
}
