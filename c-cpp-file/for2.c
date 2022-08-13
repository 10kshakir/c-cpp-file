#include<stdio.h>
int main(){
    int i = 1,j=9;
    for(;i<=j;i++,j--){
        printf("%d %d\n",i,j);
    }
    printf("at end %d %d",i,j);
    return 0;
}
