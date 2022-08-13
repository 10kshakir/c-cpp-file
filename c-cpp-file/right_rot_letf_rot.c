#include <stdio.h>
#include <stdlib.h>
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
unsigned int rRotate(unsigned int mask,int k)
{
    int lastk=mask&((1<<k)-1);
    return (mask>>k)|(lastk<<(8-k));
}
unsigned int lRotate(unsigned int mask,int k)
{
    int lastk=mask&((1>>k)-1);
    return (mask<<k)|(lastk>>(8-k));
}
unsigned int Rotate(unsigned int x, int k)
{
    if(k>1){

    int lastk=x&((1<<k)-1);
    return (x>>k)|(lastk<<(8-k));
    }
    else if(k<1){
            k=abs(k);
           int lastk=x&((1>>k)-1);
        return (x<<k)|(lastk>>(8-k));
    }
}
int main()
{
    unsigned char x =54;
    printf("%d is %s\n",x,strBinary(x,8).str);
    unsigned char r= Rotate(x,-2);
    printf("%d\n",sizeof(r));
    printf("rotate %d : %s\n",2,strBinary(r,8).str);


}
