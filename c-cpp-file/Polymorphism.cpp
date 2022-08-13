#include <iostream>

using namespace std;
class poly
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;

    }

};
int main()
{
    poly ht;
    cout<<ht.add(2.3,4.5);
    return 0;
}
