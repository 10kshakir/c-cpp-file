#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string st1="hi! i am a programmer";
    stringstream st;
    st<<st1;

   string w;

   while (st>>w)
   {
       cout<<w<<endl;
   }
    return 0;
}
