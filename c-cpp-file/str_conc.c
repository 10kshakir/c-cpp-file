#include <stdio.h>
#include <string.h>
void str_con(char a[],char b[])
{
    int lena =strlen(a);
    int lenb =strlen(b);
    int len =strlen(a)+strlen(b);

    for(int i=0;i<lenb;i++)
    {
       a[lena+i]=b[i];

    }
    a[len]='\0';
}
int main()
{
    char a[15]="hello";
    char b[]="world";
    str_con(a,b);
    int i =0;
    while(a[i]!='\0')
    {
        printf("%c ",a[i]);
        i++;
    }
}
