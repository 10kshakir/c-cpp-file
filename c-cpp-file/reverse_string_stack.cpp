#include<iostream>
#include"MYSTACK.h"

using namespace std;

string reverse_string(string st)
{
    Stack <char>a;
    string st1;
    for(int i =0;i<st.length();i++)
    {
        a.push(st[i]);
    }

    while(!a.check_empty())
    {
        st1+=a.pop();

    }
    return st1;
}

int main()
{
    string st;
    cin>>st;
    st = reverse_string(st);
    cout<<st<<endl;
    return 0;
}
