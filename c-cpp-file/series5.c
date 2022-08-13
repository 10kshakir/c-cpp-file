#include <stdio.h>
int main(){
    int sum = 0;
    for (int i = 1,j=1;j<=10;i+=3,j++){
        sum += i;
    }
    printf("%d",sum);
    return 0;
}
