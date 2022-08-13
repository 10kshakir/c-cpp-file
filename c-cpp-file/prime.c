#include <stdio.h>
int main()
{
    for(int i=100,j=1;j<=100;i++,j++){
        if(i%j==0)  printf("%d\n",i);
    }
    return 0;
}
