#include <stdio.h>
#include <string.h>
int main()
{
    int alph[26]={0};
    char c[1001];
    gets(c);
    for(int i =0;i<strlen(c);i++)
    {
        if(c[i]>='a'&&c[i]<='z')
        {
             char a =c[i];
             alph[a-97]++;

        }
    }
    int count =0;
    for(int i =0;i<26;i++)
    {
        if(alph[i]>0) count ++;
    }
    printf("%d",count);
    return 0;
}
