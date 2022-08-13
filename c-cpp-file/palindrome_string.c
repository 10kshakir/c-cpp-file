#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int len =strlen(a);
    int count =0;
    for(int i =0,j=len-1;i<len;i++,j--)
    {
        if(a[i]==a[j])count++;
    }

    if(count ==len) printf("palindrome");
    else{printf("it's not");}
    return 0;
}

