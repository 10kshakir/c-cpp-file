#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st1="aaabbbbzzz";
//    cout<<st1.find('b')<<endl;
//    cout<<st1.find_first_of('b')<<endl;
//    cout<<st1.rfind('b')<<endl;
//    cout<<st1.find_first_not_of('b')<<endl;
    string st2=st1.substr(2,7);
    cout<<st2<<endl;


    return 0;
}
