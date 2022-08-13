#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    gets(str);
    scanf("%c",&ch);
    for(int i =0;i<strlen(str);i++)
    {
        if(ch ==str[i])
        {
            printf("%c found at %d position\n",ch,i);
        }
    }
    return 0;
}
