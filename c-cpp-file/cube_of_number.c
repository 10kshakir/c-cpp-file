#include <stdio.h>
int main(){
     int n ;
     scanf("%d",&n);
     for(int i = 1;i<=n;i++){
            int cube= i*i*i;
        printf("%d and the cube of %d is %d\n",i,i,cube);
     }
     return 0;
}
