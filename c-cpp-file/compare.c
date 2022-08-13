#include <stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int indx =0;
    while(a[indx]==b[indx]&&a[indx]!='\0'&&b[indx]!='\0')
    {
        printf("%d %d\n",a[indx],b[indx]);
        indx++;
    }
    printf("%d\n",indx);
    if(a[indx]=='\0'&&b[indx]=='\0'){
        printf("Equal");
    }else if(a[indx]!='\0'&&b[indx]=='\0'){
        printf("b is smaller");
    }else if(a[indx]=='\0'&&b[indx]!='\0'){
        printf("a is smaller");

    }else if(a[indx]<b[indx]){
        printf("a is smaller");
    }else{
        printf("b is smaller");
    }
    return 0;
}
