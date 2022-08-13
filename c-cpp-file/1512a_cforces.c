#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        int num[k];
        for(int j =0;j<k;j++)
        {
            scanf("%d",&num[j]);
        }
        int count =0;
        for(int t =0;t<k;t++)
        {
            int element =num[t];
            count =0;
            for(int a =0;a<k;a++)
            {
                if(element ==num[a])
                {
                    count++;
                }
            }
            if(count==1)
            {
                printf("%d\n",t+1);
                break;
            }
        }


    }

    return 0;
}

