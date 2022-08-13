#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="hello";
    char *st=str;
    char *ch =strchr(str,'f');
//    printf("%d",ch-st);
    if(!ch)
    {
        printf("not found");
    }
    return 0;
}
