#include <stdio.h>
int main(){
    int mark[5];
    for (int i = 0;i<5;i++){
        printf("Enter %d mark :",i+1);
        scanf("%d",&mark[i]);
    }
    for(int i =0;i<5;i++){
        mark[i]+=5;
    }
    for(int j =0;j<5;j++){
        printf("The mark of %d student is %d\n",j+1,mark[j]);
    }
    return 0;
}
