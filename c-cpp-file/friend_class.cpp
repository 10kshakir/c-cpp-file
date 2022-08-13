#include <iostream>

using namespace std;

class Parent
{
private:
    int tk;
    int password;
public:
    Parent(int a,int b)
    {
        tk =a;
        password =b;
    }
    friend class friend_class;
    friend void tell(Parent *ptr);

};

void tell(Parent *ptr)
{
    cout<<ptr->tk<<" "<<ptr->password<<endl;
}
class friend_class
{
public:
    void tellSomething(Parent *ptr)
    {
        cout<<ptr->tk<<" "<<ptr->password<<endl;
    }
};

int main()
{
    Parent pt(1599,2044);
    friend_class ch;
    ch.tellSomething(&pt);
    tell(&pt);
    return 0;
}
