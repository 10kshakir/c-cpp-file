#include<stdio.h>
int main()
{
    char ch[10];
     gets(ch);
     int freq[10]={0};
    for(int i =0;i<10;i++)
    {
       char c =ch[i];
       int digit=c-'0';
       freq[digit]++;
    }
    for(int i=0;i<10;i++)
    {
        if(freq[i]==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
