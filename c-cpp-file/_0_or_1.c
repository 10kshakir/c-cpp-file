#include <stdio.h>
int main()
{

    do
    {
        int i;
        printf("enter 0/1:");
        scanf("%d",&i);
        if(i==0 || i==1)
        {
            printf("You entered %d\n",i);
            break;
        }else
        {
            printf("Try again\n");
        }


    }while(1);
    return 0;
}
