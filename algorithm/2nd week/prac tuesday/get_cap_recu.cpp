#include <iostream>
#include <string>

using namespace std;

char get_capital(string str)
{
      static int i =0;
      if (str[i] == '\0')
         return 0;
    if (isupper(str[i]))
            return str[i];
    i++;
    return get_capital(str);
}

int main()
{
      string st="thisStRIng";
      cout<<get_capital(st);
}