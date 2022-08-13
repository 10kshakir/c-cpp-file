#include <stdio.h>
int main(){
    int H,W,h,w,result;
    scanf("%d",&H);
    scanf("%d",&W);
    scanf("%d",&h);
    scanf("%d",&w);
    result =(H-h)*(W-w);
    printf("%d",result);
    return 0;
}
