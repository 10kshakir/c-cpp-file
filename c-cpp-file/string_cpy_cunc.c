#include <stdio.h>
#include <string.h>
void str_cpy(char a[],char b[])
{
    for(int i =0;i<strlen(b);i++)
    {
        a[i]=b[i];
    }
    a[strlen(b)]='\0';
}
int main()
{
    char str[]="hello";
    char str1[10];
    str_cpy(str1,str);
    int i =0;
    while(str1[i]!='\0')
    {
        printf("%c ",str1[i]);
        i++;
    }
}
