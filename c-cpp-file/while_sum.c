#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int sum=0;
    while(i>0){
        int digit =i%10;
         i =i/10;
        sum+=digit;
    }
    printf("%d",sum);
    return 0;
}
