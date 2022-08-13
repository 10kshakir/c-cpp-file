#include <stdio.h>
int main()
{
    char ch[10];
    gets(ch);
    int freq[10]={0};
    for(int i =0;i<10;i++)
    {
        char c =ch[i];
        int digit = c-'0';
        freq[digit]++;
    }
    int ans ;
    for(int i =0;i<10;i++)
    {
        if(freq[i]==0)
        {
            ans =i;
        }
    }
    printf("%d",ans);
    return 0;
}
