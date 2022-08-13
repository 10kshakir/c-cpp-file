#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    srand(time(0));
    int hidden  = rand()%100+1;
    int num_of_guesses =0;
    while(num_of_guesses<10){
        int guess ;
        printf("guess number");
        scanf("%d",&guess);
        if(guess==hidden){
            printf("you are right\n");
            break;
        }else if(guess>hidden){
            printf("guess smaller\n");
        }else{
            printf("guess larger\n");
        }
        num_of_guesses++;
    }
    if (num_of_guesses==10){
        printf("You failed ");
    }
    return 0;
}
