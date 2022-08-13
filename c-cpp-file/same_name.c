#include <stdio.h>
#include <string.h>
struct Name
{
    char first[50];
    char last[50];
};
int main()
{
     int n;
     scanf("%d",&n);
     struct Name artland[n];
     int count =0;
     for(int i =0;i<n;i++)
     {
         scanf("%s%s",&artland[i].first,&artland[i].last);
     }
     for(int i =0;i<n-1;i++)
     {
         for(int j =i+1;j<n;j++)
         {
             int a =strcmp(artland[i].first,artland[j].first);
             int b =strcmp(artland[i].last,artland[j].last);
             if(a==0&&b==0) count++;
         }
     }

    if(count)
    {
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
