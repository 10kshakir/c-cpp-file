#include <iostream>

using namespace std;
class Parent
{
public:
    int x;
private:
    int y;
protected :
    int z;
public :
    Parent(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
};

class Child:protected Parent
{
public:
    int d;
    Child(int l,int a,int b,int c):Parent( a,b,c)
    {
        d=l;
    }
    void tellme()
    {
        cout<<"protected value: "<<z<<endl;
    }
};
int main()
{
    Parent pt(10,20,30);
    Child ch(3,10,20,30);

    ch.tellme();

    return 0;
}
