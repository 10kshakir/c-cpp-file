#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int count[26]={0};
    int n;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    for(int i =0;i<n;i++)
    {
        c[i]=tolower(c[i]);

    }
    for(int i =0;i<n;i++)
    {
        int val =c[i]-'a';
        count[val]++;

    }
    for(int i =0;i<26;i++)
    {
        if(count[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
