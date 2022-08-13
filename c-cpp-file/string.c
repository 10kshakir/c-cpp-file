#include <stdio.h>
int main()
{
    char str[] ="This is a string.";

    int sz= sizeof(str)/sizeof(str[0]);

    str[6]='\0';
    printf("%s",str);
    return 0;
}
