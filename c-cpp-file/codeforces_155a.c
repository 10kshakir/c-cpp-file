#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int answer =0,isMin=num[0],isMax=num[0];
    for(int i =1;i<n;i++)
    {
        if(num[i]<isMin||num[i]>isMax)
        {
            answer++;

        }
        if(isMin>num[i])
        {
            isMin=num[i];
        }
        if(isMax<num[i])
        {
            isMax=num[i];
        }
    }


    printf("%d\n",answer);
    return 0;
}
