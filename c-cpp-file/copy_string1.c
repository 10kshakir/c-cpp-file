#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int len =strlen(a);
    char b[len];
    for(int i =0;i<len;i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}
