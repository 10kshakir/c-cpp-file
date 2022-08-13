#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x =b-a;
    int y =c-b;
    if(x==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
