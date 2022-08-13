#include <stdio.h>
int main(){
    int month,limit;
    scanf("%d %d",&limit,&month);
    int rest=0;
    for(int i = 1;i<= month;i++){
        int used;
        scanf("%d",&used);
        int month_limit = limit+rest;
        rest = month_limit-used;
    }
    printf("%d ",rest+limit);
}
