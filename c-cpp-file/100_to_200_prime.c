#include <stdio.h>
int main()
{
    int count =0;
    for(int i =100;i<=200;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
            if(count<=1){
                printf("%d",i);
            }
        }
    }
    return 0;
}
