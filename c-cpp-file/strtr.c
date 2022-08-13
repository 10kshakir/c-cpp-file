#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    char str[100];
    gets(text);   //texas
    scanf("%s",str); //a

   char *pos =strstr(text,str);
   printf("%s",pos);//as

    return 0;
}
