#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    fgets(str,10,stdin);
    printf("%s",str);
    return 0;
}
