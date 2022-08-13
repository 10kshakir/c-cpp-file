#include <stdio.h>
int main(){
    int sum =0;
    for (int i =100;i>=0;i-=3){
        sum +=i;
    }
    printf("%d",sum);
    return 0;
}
