#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    gets(a);
    int len =strlen(a);
    int count[26]={0};
    for(int i =0;i<len;i++)
    {
        char val =a[i];
        count[val-'a']++;


    }
    int most =0;
    for(int i =0;i<26;i++)
    {
        if(count[i]>most)
        {
            most =count[i];
        }
    }

    for(int i =0;i<26;i++)
    {
        if(most ==count[i])
        {
            printf("%c ocuures most\n",i+'a');
        }
    }


    return 0;
}
