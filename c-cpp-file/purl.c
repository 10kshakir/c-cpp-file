#include <stdio.h>
#include <string.h>
int main()
{
    int n ;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    int count=0;
    for(int i =0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(ch[i]!=ch[i+1])
            {
                count++;

            }

        }
    }
   int num =count/n;
  printf("%d",n-num);

}
