#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="shakir";
    for (int i =0;i<strlen(str)+1;i++)
    {
        if(str[i]=='\0')
            printf("%d",0);
        else
            printf("%c ",str[i]);
    }
    return 0;
}
