#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            printf("%d ",i);
        }

    }
    return 0;
}
