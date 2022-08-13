#include <stdio.h>
int Strlen(char str[])
{
    char *s =str;
    int ans =0;
    while(*s!='\0')
    {
        ans++;
        s++;
    }
    return ans;
}
int main()
{
    char h[]="hello";
    printf("%d",Strlen(h));
    return 0;
}
