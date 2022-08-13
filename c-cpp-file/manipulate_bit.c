#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct binary{
    char str[50];
};
struct binary tobinary(unsigned int val ,int k)
{
    struct binary ans;
    int indx =0;
    while(val>0)
    {
        int d = val%2;
        val=val/2;
        ans.str[indx]='0'+d;

        indx++;
    }
    for(int i =indx;i<k;i++) ans.str[i]='0';
    ans.str[k]='\0';
    strrev(ans.str);
    return ans;

}
bool getbit(unsigned int a,int k)
{
    return (a&(1<<k)) !=0;
}
unsigned int setbit(unsigned int a,int k)
{
    return a|(1<<k);
}
unsigned int clearbit(unsigned int a,int k)
{
    return a&~(1<<k);
}
unsigned int flipbit(unsigned int a,int k)
{
    return a^(1<<k);
}
int main()
{
    int x =54;
    printf("%d is %s\n",x,tobinary(x,8).str);
    for(int i =0;i<8;i++)
    {
        printf("%d th %d\n",i,getbit(x,i));
        printf("clear :%s\n",tobinary(setbit(x,i),8).str);
    }

    return 0;
}
