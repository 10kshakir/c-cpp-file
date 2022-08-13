#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int diff=a-b;
    int earthquake=1;
    if(a==b&&a<b){
        printf("%d",1);
    }else{
     for(int i =1;i<=diff;i++){
        earthquake*=32;

     }
    }
    printf("%d",earthquake);

    return 0;
}
