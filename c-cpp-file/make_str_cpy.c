#include <stdio.h>
#include <string.h>
void makeStrCopy(char in[], char out[])
{
    int sz=strlen(in);
    for(int i =0;i<sz;i++)
    {
        out[i]=in[i];
    }
}
int main()
{
    char p[100],q[100];
    scanf("%s",p);
    makeStrCopy(p,q);
    printf("%s",q);

    return 0;
}
