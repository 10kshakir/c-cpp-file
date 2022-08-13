#include <stdio.h>
#include <string.h>
int main ()
{
      char s[1000];
      int  j = 0,  arr[1000] ;
      scanf("%s", s);
      int ln = strlen(s);
      for(int i = 0; i < ln; i++)
      {
          if((i % 2) == 0)
          {
              arr[j] = (int) s[i];
              j++;
          }
      }
      for(int i = 1; i < j; i++)
     {
          for(int k = 0; k < (j - i); k++)
         {
              if(arr[k] > arr[k + 1])
              {
                  int temp = arr[k];
                  arr[k] = arr[k + 1];
                  arr[k + 1] = temp;
              }
          }
      }
      for(int i = 0; i < j; i++)
      {
          if(i == (j - 1))
          {
              printf("%c", (char) arr[i]);
          }
          else
          {
              printf("%c%c", (char) arr[i], '+');
          }
      }
      printf("\n");

      return 0;
}
