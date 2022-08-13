#include <stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i =a;i<=b;i++){
        if(i%a==0&&b%i==0){
            printf("%d\n",i);

        }
    }
    return 0;
}
