#include <stdio.h>
#include <string.h>
unsigned int binaryToInt(char str[])
{
    int len =strlen(str);
    int ans =0;
    for(int i =0;i<len;i++)
    {
        int dig = str[i]-'0';
        ans=ans*2+dig;
    }
    return ans;
}
int main()
{
    char str[100];
    scanf("%s",str);
    char h[100];
    h=str<<;
    printf("%s",h);
    return 0;
}
