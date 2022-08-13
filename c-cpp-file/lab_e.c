#include <stdio.h>
#include <stdbool.h>
bool check_array(int a[],int n)
{
  int d =n+1;
  int count[d];
  for(int i =0;i<d;i++)
  {
      count[i]=0;
  }
  for(int i =0;i<n;i++)
  {
      int element =a[i];
      count[element]++;
  }
  for(int i =1;i<=n;i++)
  {
      if(count[i]==0) return false;
  }
  return true;
}
int main()
{
    int a[]={1,2,4,5,3} ;
    int c =check_array(a,5);
    printf("%d",c);
}
