#include <stdio.h>
#include <string.h>
int main()
{
    char c[] ="bangladesh";
    int len =strlen(c);
    for (int i =0;i<len;i++)
    {
        if(c[i]>=97&&c[i<=122])
        {
            c[i]='A'+(c[i]-'a');
        }
    }
    printf("%s",c);
    return 0;
}
