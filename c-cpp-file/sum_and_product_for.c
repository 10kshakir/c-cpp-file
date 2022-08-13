#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int product =1;
    printf("i\t\product\n");
    for (int i =1;i<=num;i++){
        product*=i;
        printf(" %d\t\t %d \n ",i ,product);
    }
    printf("overall product",product);
    return 0;
}
