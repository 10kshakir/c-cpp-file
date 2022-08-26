#include<iostream>
#include"MYSTACK.h"

using namespace std;

bool check_palindrome(string st)
{
    Stack <char>a;
    string st1="";
    for(int i =0;i<st.length();i++)
    {
        a.push(st[i]);
    }
    while(!a.check_empty())
    {
        st1+=a.pop();
    }

    if(st==st1)return true;
    else return false;
}

int main()
{
    string st;
    cin>>st;
    bool chk = check_palindrome(st);
    if(chk)
    {
        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
    return 0;

}
