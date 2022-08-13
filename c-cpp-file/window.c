#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int height =a;
    int width =b*2;
    if(width>height){
        printf("%d",0);
    }else{
        printf("%d",height-width);
    }
    return 0;
}
