#include <iostream>

using namespace std;

namespace one
{
    int x =9;
    void fun()
    {
        cout<<"Hello World";
    }
}
namespace two
{
   int x =10;
    void fun()
    {
        cout<<"Hello World 1";
    }
}

int main()
{
    cout<<one::x<<endl;
    cout<<two::x<<endl;


    one::fun();
    cout<<endl;
    two::fun();

    return 0;
}
