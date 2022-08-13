#include <stdio.h>
#include <stdlib.h>
int *squares(int a) {
    int *square=(int *)malloc(a*sizeof(int));
    for(int i =0;i<a;i++)
    {
        square[i]=(i+1)*(i+1);
    }
    return square;

}

int main()

{
      int n =5;
      int *b;
      b=squares(n);
      for(int i =0;i<n;i++)
      {
          printf("%d ",*(b+i));
      }

    return 0;
}
