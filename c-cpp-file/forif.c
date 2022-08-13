#include <stdio.h>
int main(){
    int num ;
    scanf("%d",&num);
    int count =0;
    for (int i = 1;i<=num;i++){
        if(num%i ==0){
            printf("%d\n",i);
            count ++;
        }

    }
    printf("count is %d ",count);
}
