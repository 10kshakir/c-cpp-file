#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    for (int i =1;i<=n;i++){
       int a;
       scanf("%d",&a);
       if(a%2==0){
        sum+=a;
       }
    }
    printf("%d",sum);
    return 0;
}
