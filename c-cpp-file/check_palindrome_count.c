#include <stdio.h>
#include <string.h>
int check_palindrome(char a[])
{
    int count =0;
    int len =strlen(a);
    for(int i =0,j=len -1;i<=j;i++,j--)
    {
        if(a[i]!=a[j]) count++;
    }
    return count;
}
int main()
{
    char str[]="afghhagt";
    printf("%d",check_palindrome(str) );

    return 0;
}
