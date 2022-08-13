#include <iostream>
#include <string>
using namespace std;
int main()
{
    string  st1="abc";
    st1.assign("byx");

    st1.append("hi");
    st1.push_back('t');
    st1.pop_back();
    st1.insert(1,"a");
    st1.erase(1,3);
    cout<<st1;
    return 0;
}
