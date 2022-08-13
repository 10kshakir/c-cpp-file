#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char str[100000];
    scanf("%s",str);
    for(int i =a-1,j=b-1;i<j;i++,j--)
    {
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    return 0;
}
