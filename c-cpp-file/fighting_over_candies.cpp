#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        if(a==b+c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if(b>a&&b>c)
    {
        if(b==a+c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else
    {
        if(c==a+b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }

    }
    return 0;
}
