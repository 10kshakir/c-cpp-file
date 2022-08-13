#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct binary{
    char str[50];
};

struct binary strBinary (unsigned int val,int k)
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
unsigned char rRotate(unsigned char mask,int k)
{
    int lastk =mask&((1<<k)-1);

   return (mask>>k)|(lastk<<(8-k)) ;
}
unsigned char lRotate(unsigned char mask,int k)
{
    int lastk;
     lastk=mask&((1>>k)-1);
     return (lastk>>(8-k))|(mask<<k);
}
int main()
{
    unsigned char x =178;
    printf("%d is %s\n",x,strBinary(x,8).str);

    unsigned int r =rRotate(x,2);

    printf("%s\n",strBinary(r,8).str);

    return 0;
}
