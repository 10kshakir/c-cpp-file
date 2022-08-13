#include <stdio.h>
int main()
{
    int num_of_friends,height;
    scanf("%d%d",&num_of_friends,&height);
    int sum =0;

    for(int i =1;i<=num_of_friends;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>height){
            sum+=2;
        }else{
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
