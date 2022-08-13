#include <stdio.h>
int main(){
    int money  = 0;
    int target=100;
    while (money<target){
        int given;
        printf("need money .give your money :");
        scanf("%d",&given);
        money+=given;
        printf("%d\n",money);
    }

    return 0;
}
