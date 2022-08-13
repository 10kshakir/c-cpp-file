#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        int a[k];
        for(int i =0;i<k;i++)
        {
            scanf("%d",&a[i]);
        }
        int max =a[0];
        for(int i =0;i<k;i++)
        {
            if(a[i]>max) max =a[i];
        }
        int n1=max+1;
        int count[max+1];
        for(int i =0;i<n1;i++)
        {
            count[i]=0;
        }
        for(int i =0;i<k;i++)
        {
            int val =a[i];
            count[val]++;
        }
        int d =0;
        for(int i =0;i<n1;i++)
        {
            if(count[i]>=3)
            {
                d=i;

            }
        }
        if(d<=0)
        {
            printf("%d\n",-1);
        }else{
            printf("%d\n",d);
        }
    }
        return 0;
}
