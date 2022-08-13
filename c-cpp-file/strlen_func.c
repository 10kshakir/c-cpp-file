#include <stdio.h>
int strlenb(char str[])
{
    int index =0;
    while(str[index]!='\0')
    {

        index++;
    }
    return index;
}
int main()
{
    char hel[]="hello";
    int l =strlenb(hel);
    printf("%d",l);
    return 0;
}
