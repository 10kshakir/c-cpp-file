#include <stdio.h>
int main()
{
    int num[100];
    int n ;
    scanf("%d",&n);
    int freq[100];
    int count= 0;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    for(int i =0;i<n;i++)
    {
        count =1;
        if(num[i]!= -1){

            for(int j =i+1;j<n;j++)
            {
                if(num[i]==num[j])
                {
                    count++;
                    num[j]=-1;
                }
                freq[i]=count;
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        if(num[i]!=-1)
        {
            printf("%d occures %d times\n",num[i],freq[i]);
        }
    }


    return 0;
}
