#include <stdio.h>
#include <string.h>
int main()
{
    char s[16] ;
    scanf("%s",s);
    char st[16] ="Hello,World!";
    int val =strcmp(s,st);
    if(val==0){
        printf("AC");
    }else{
        printf("WA");
    }

    return 0;
}
