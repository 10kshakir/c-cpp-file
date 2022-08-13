#include <iostream>
#include <string>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    char e[102] ;
    int  c =0;
    int d =0;
    for(int i =0;i<a.length()+b.length();i++)
    {
        if(i%2==0)
        {
            cout<<a[c];
            c++;
        }else{
            cout<<b[d];
            d++;
        }
    }

    return 0;
}
