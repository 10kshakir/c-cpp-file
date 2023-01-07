#include <iostream>
using namespace std;

int fibo_recu(int n)
{
      if (n ==0)
      {
            return 0;
      }
      if (n ==1)
      {
            return 1;
      }

      int ans = fibo_recu(n-1)+fibo_recu(n-2);

      return ans;
}

int main()
{
      int n ;
      cin>>n;

      int ans =fibo_recu(n);
      cout<<ans<<endl;
}