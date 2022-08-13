#include <stdio.h>
int main()
{
    int n ,k;
    scanf("%d%d",&n,&k);
    int num[n];
    int count =0;
    for(int i =0;i<n;i++)
    {
        scanf("%d" ,&num[i]);
    }
    for(int i =0;i<n;i++)
    {

        if(num[i]>=num[k-1]&&num[i]>0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
