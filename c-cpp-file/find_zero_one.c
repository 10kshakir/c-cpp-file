#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct binary{
    char str[50];
};
void tobinary(unsigned int val,char str[])
{
    int indx =0;
    while (val>0)
    {
        int d =val%2;
        val=val/2;
        str[indx]='0'+d;
        indx++;
    }

    str[indx]='\0';
    strrev(str);

}
bool getbit(unsigned int a,int k)
{
    return (a&(1<<k)) !=0;
}
struct binary strBinary (unsigned int val)
{
    struct binary ans;
    int indx=0;
    while(val>0)
    {
        int d =val%2;
        val=val/2;
        ans.str[indx]='0'+d;
        indx++;
    }

    ans.str[indx]='\0';
    strrev(ans.str);
    return ans;

}
int main()
{
    unsigned int a=22;
    struct binary s =strBinary(a);
    int len =strlen(s.str);
    int count =0;
    int count1 =0;
    for(int i =0;i<len;i++)
    {
        if(getbit(a,i)==1)
        {
            count1++;
        }else if(getbit(a,i)==0)
        {
            count++;
        }
    }
    printf("1 come %d th time\n",count1);
    printf("0 come %d th time\n",count);



    return 0;
}
