#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int count=0;
    for(int i=0;i<strlen(ch);i++)
    {
        for(int j=i+1;j<strlen(ch);j++)
        {
            if(ch[i]==ch[j])
            {
                count++;
                break;
            }
        }
    }
    int result = strlen(ch)-count;
    if (result % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!" );
    }
    return 0;
}
