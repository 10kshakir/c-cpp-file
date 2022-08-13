#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{

    char a[100],b[100];
    scanf("%s %s",a,b);
    int lena =strlen(a);
    int lenb =strlen(b);
    for(int i =0;i<lena;i++)
    {
        a[i]=towlower(a[i]);
    }
    for(int i =0;i<lenb;i++)
    {
        b[i]=towlower(b[i]);
    }

    int cmp =strcmp(a,b);
    printf("%d",cmp);
    return 0;
}
