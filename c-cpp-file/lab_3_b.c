#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i =0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max =0;
    int sum =0;
    for(int i =0;i<n;i++)
    {
        if(num[i]>max)
        {
            max =num[i];
        }
    }
    for(int i =0;i<n;i++)
    {
        sum=sum+(max-num[i]);
    }
    printf("%d",sum);
    return 0;

}
