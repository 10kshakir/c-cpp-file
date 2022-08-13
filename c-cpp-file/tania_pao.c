#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        char ch[100];
        scanf("%s",ch);
        int len =strlen(ch);
        for(int j =0;j<len-1;j+=2)
        {
            printf("%c",ch[j]);
        }

        printf("%c\n",ch[len-1]);
    }
    return 0;
}
