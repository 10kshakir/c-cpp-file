#include <stdio.h>
#include <string.h>
int lastIndex(char str[],char ch)
{
    int indx ;
    for(int i =0;i<strlen(str);i++)
    {
        if(ch==str[i])
        {
            indx =i;
        }
    }
    if(indx>0)
    {
        return indx;
    }else{
        return -1;
    }
}
int main()
{
    char a[]="hello";
    printf("%d\n",lastIndex(a,'o'));
    return 0;
}
