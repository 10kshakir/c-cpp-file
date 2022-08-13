#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    gets(str);
    int len =strlen(str);
    printf("Input character to search:");
    char ch;
    scanf("%c",&ch);
    int count =0;
    for (int i =0;i<len;i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Total occurrences of '%c': %d",ch,count);
    return 0;
}
