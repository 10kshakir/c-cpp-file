#include <stdio.h>
#include <string.h>
int main(){
    char str[] ="hello world";
    char str1[5];
    strncpy(str1,str,5);
    str1[5]='\0';
    printf("%s",str1);


    return 0;
}
