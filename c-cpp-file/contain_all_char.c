#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    gets(a);
    int count[26]={0};
    for(int i =0;i<strlen(a);i++)
    {
        int val =a[i]-'a';
        count[val]++;
    }
    int counts =0;
    for(int i =0;i<26;i++)
    {
        if(count[i]==0)
        {
            printf("no");
            counts =1;
            break;

        }

    }
    if(counts ==0)printf("yes");
    return 0;
}
