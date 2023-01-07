#include <iostream>

using namespace std;

int to_gcd(int a, int b) {
  while (b != 0) {
    int remainder = a % b;
    a = b;
    b = remainder;
  }
  return a;
}

int gcd(int a,int b)
{
      if(b<=0) return a;
      
      int reaminder =a%b;
      a = b;
      gcd (a,reaminder);
}

int main()
{
      int a =75,b =85;
      cout<<to_gcd(a,b)<<endl;
      cout<<gcd(a,b)<<endl;
}
