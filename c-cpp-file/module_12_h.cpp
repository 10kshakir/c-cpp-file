#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    int a,b;
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A')
        {
            a=i+1;
            break;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='Z')
        {
            b=i+1;
        }
    }
    cout<<b-a+1<<endl;
    return 0;
}
