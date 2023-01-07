#include <iostream>
using namespace std;

int sum_rec(int n)
{
   if (n<=0)
   {
      return 0;
   }
   else{
      return n%10+sum_rec(n/10);
   }


}

int main()
{
      int n =7464;
      int sum =sum_rec(n);
      cout<<sum<<endl;
}