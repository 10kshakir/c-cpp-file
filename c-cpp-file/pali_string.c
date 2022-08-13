#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int len =strlen(a);
    int count =0;
    for(int i =0,j=len-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("it's not");
            count=1;
        }
    }

    if(count ==0) printf("palindrome");

    return 0;
}

