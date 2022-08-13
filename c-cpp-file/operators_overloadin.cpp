#include <iostream>
#include <string>

using namespace std;
class Example
{
public:
    int x;
    Example(int a)
    {
        x =a;
    }
    int operator +(Example obj)
    {
        return obj.x+x;
    }
};
int main()
{
    Example a(10),b(20);
    int c =a+b;
    cout<<c;

    return 0;
}
