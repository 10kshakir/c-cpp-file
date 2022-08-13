#include <stdio.h>
#include <string.h>
unsigned int binaryToInt(char  str[])
{
    int len =strlen(str);
    unsigned int ans=0;
    for(int i =len-1,p2=1;i>=0;i--,p2*=2)
    {
        int bit =str[i]-'0';
        if(bit ==1) ans+=p2;
    }
    return ans;
}
int main()
{
    char str[100];
    scanf("%s",str);
    printf("%d",binaryToInt(str));
    return 0;
}
