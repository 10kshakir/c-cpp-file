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
bool getbit(unsigned int a,int k)
{
    return (a&(1<<k)) !=0;
}
int main()
{
    unsigned int x =28;
    struct binary  s =strBinary(x);
    int d =strlen(s.str);


    for(int i =0;i<d;i++)
    {
        if(getbit(x,i)==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
