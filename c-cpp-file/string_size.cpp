#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st(10,'a');

    cout<<st<<" "<<st.length()<<endl;
    string str1="abckder";
    str1.at(2)='d';
    cout<<str1;
    return 0;
}
