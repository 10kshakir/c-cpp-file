#include <stdio.h>
#include <string.h>
void stringCat(char a[], char b[], char out[])
{
    for(int i =0;i<strlen(a);i++)
    {
        out[i]=a[i];
    }
    for(int i =0;i<strlen(b);i++)
    {
        out[strlen(a)+i]=b[i];
    }
}
int main()
{
    char a[100],b[100],c[201];
    scanf("%s",a);
    scanf("%s",b);
    stringCat(a,b,c);
    int n =strlen(c);
    for(int i =0;i<n;i++)
    {
        printf("%c",c[i]);
    }


    return 0;
}
