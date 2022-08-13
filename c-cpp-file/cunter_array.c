#include <stdio.h>
int main()
{
    int number_of_users ;
    scanf("%d",&number_of_users);
    int ratings[number_of_users];
    int sum=0;
    for(int i =0;i<number_of_users;i++){
        scanf("%d",&ratings[i]);
        sum+=ratings[i];
    }
    double avarage = (double)sum/number_of_users;
    printf("avarage is %.2lf\n",avarage);
    int count[6]={0};
    for(int i =0;i<number_of_users;i++){
        int x =ratings[i];
        count[x]++;
    }
    for(int i =1;i<=5;i++){
        printf("%d -> %d\n",i,count[i]);
    }

    return 0;
}
