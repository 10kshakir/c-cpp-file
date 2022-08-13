#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum =0;
    for (int i =1;i<=num;i++){
        int temp;
        scanf("%d",&temp);
        if (temp<0){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
