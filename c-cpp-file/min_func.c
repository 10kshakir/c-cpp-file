#include <stdio.h>
int getMin(int x,int y)
{
    int min;
    if(x<y)
    {
        min =x;
    }else{
        min=y;
    }
    return min;
}

int main()
{
    int n;
    scanf("%d",&n);

    int num[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    int min =num[0];
    for(int i =0;i<n;i++)
    {
        min=getMin(min,num[i]);
    }
    printf("%d",min);



    return 0;
}
