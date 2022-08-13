#include <iostream>
using namespace std;

class Example
{
private:
    int x;
    int pass;
public:
//    Example(int p)
//    {
//        pass=p;
//    }
    void setter(int a)
    {
//        if(p==pass)
//        {
//            x=a;
//        }else{
//            cout<<"wrong password";
//        }
        x=a;
    }
    int getter()
    {
//         if(p==pass)
//        {
//            return x;
//        }else{
//            cout<<"wrong password"<<endl;
//            return -1;
//        }
        return x;
    }

};
int main()
{

//    Example a(1234);
//    a.setter(12,1234);
    Example a;
    a.setter(12);
    cout<<a.getter();


    return 0;

}
