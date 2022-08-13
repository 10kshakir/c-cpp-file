#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][100];
    int count =0;
    for(int i =0;i<n;i++)
    {
       scanf("%s",&str[i]);
    }
    for(int i =0;i<n;i++)
    {
       if(str[i][0]=='T')
       {
           count=count+4;
       }
       else if(str[i][0]=='C')
       {
           count+=6;
       }else if(str[i][0]=='O')
       {
           count+=8;
       }else if(str[i][0]=='D')
       {
           count+=12;
       }else if(str[i][0]=='I'){
        count+=20;
       }


    }
    printf("%d",count);

}


