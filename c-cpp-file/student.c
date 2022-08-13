#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int count=0;
    for(int i =1;i<=a;i++){
        int c;
        scanf("%d",&c);
        if(c<b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
