#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],t[100];
    scanf("%s %s",s,t);
    int val =strcmp(s,t);
    if(val<0)
    {
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
