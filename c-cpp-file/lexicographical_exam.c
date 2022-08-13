#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int value =strcmp(a,b);

    if(value<=0){
        printf("%s\n",a);
        printf("%s\n",b);
    }else{
        printf("%s\n",b);
        printf("%s\n",a);
    }
    return 0;
}
