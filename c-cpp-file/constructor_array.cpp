#include <iostream>
#include <string>

using namespace std;

class Example
{
public:
    int x;
    int y;
    Example(){}
    Example(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

Example* set_exmaple(int n)
{
     Example *et =new Example[n];
     for(int i =0;i<n;i++)
     {
         int a,b;
         cin>>a>>b;
         et[i]=Example(a,b);
     }
     return et;

}

int main()
{
    int n =3;
    Example *et =set_exmaple(n);

    for(int i =0;i<n;i++)
    {
        et[i].print();
    }
    return 0;
}
