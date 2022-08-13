#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100],b[100],c[100];
    scanf("%s %s %s",a,b,c);
    int lena =strlen(a);
    int lenb =strlen(b);
    int lenc =strlen(c);
    int sumc=0;
    int suma=0;
    int sumb=0;
    for(int i =0;i<lena;i++)
    {
        suma+=a[i];
    }
    for(int i =0;i<lenb;i++)
    {
        sumb+=b[i];
    }
    for(int i =0;i<lenc;i++)
    {
        sumc+=c[i];
    }
    if(suma+sumb==sumc){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
