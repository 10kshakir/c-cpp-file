#include <iostream>
#include<string>
using namespace std;

string reverse_string_recursively(string str){
    if (str.length() == 0) {
        return "";
    }else{
        
        return reverse_string_recursively(str.substr(1,str.length())) + str[0];
    }
}



int main()
{
      string st ="phitron";
      st =reverse_string_recursively(st);
      cout<<st<<endl;
}