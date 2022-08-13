#include <stdio.h>
#include <string.h>
int firstIndex(char str[],char ch)
{
    for(int i =0;i<strlen(str);i++)
    {
        if(ch==str[i])
        {
            return i;
        }
    }
     return -1;

}
int main()
{
    char a[]="hello";
    printf("%d",firstIndex(a,'l'));
}
