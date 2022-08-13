#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count1 =0;
    int count2=0;
    for(int i =1;i<=n;i++)
    {
        char a;
        scanf(" %c",&a);

        if(a=='D') ++count1;
        if(a=='A')  ++count2;
    }
    if(count1>count2){
        printf("Danik");
    }else if(count2>count1){
        printf("Anton");
    }else{
        printf("Friendship");
    }
    return 0;
}
