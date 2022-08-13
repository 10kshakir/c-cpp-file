#include <stdio.h>
#include <string.h>
void truncate(char str[],int n)
{
    int len =strlen(str);
    if(n<0||n>len) return;
    str[n]='\0';

}
int main()
{
    char str[1000];
    gets(str);
    int k;
    scanf("%d",&k);
    truncate(str,k);
    printf("%s",str);
    return 0;
}
