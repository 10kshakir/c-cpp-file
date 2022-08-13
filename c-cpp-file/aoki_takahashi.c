#include  <stdio.h>
int main()
{
    int a,b,c,d,e,f,x;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);

    int p =x/(a+c),r=x%(a+c);

    int s =p*a;
    if(r<=a){
        s+=r;
    }else{
        s+=a;
    }
    int T =s*b;

    int q=x/(d+f),w=x%(d+f);

    int l=q*d;
    if(w<=d){
       l+=w;
    }else{
        l+=d;
    }

    int A=l*e;


    if (T>A){
      printf("Takahashi");
    }else if(T<A){
        printf("Aoki");
    }else{
        printf("Draw");
    }





    return 0;
}
