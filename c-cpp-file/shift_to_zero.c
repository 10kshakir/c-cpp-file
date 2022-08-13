#include <stdio.h>
#include <string.h>
unsigned int binaryToInt(char str[])
{
    int len =strlen(str);
    int ans=0;
    for(int  i =0;i<len;i++)
    {
        int dig=str[i]-'0';
        ans =ans*2+dig;
    }
    return ans;
}
void tobinary(unsigned int val ,char str[],int k)
{

    int indx =0;
    while(val>0)
    {
        int d = val%2;
        val=val/2;
        str[indx]='0'+d;

        indx++;
    }
    for(int i =indx;i<k;i++) str[i]='0';
    str[k]='\0';
    strrev(str);

}
int main()
{
    int i =36;
    int k =i>>2;
    char str[50],ch[100];
    tobinary(i,ch,8);
    tobinary(k,str,8);
    printf("%s\n",ch);
    printf("%s\n",str);

    return 0;
}
