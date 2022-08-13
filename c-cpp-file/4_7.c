#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int count =0;
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count ==7)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }

    return 0;
}
