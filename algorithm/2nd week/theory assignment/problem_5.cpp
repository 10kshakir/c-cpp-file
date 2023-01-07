#include <iostream>
using namespace std;

string to_binary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        if (decimal % 2 == 0) {
            binary = '0'+ binary;
        }
        else {
            binary = '1'+ binary;
        }
        decimal /= 2;
    }
    return binary;
}

string int_to_binary(int decimal)
{
      if (decimal ==0) return "";

      int a =decimal%2;
      string c=to_string(a);
      return (int_to_binary(decimal/2)+c);

      

      

}

int main()
{
      int n =100;
     cout<<int_to_binary(n)<<endl;
     cout<<to_binary(n)<<endl;
      return 0;
}