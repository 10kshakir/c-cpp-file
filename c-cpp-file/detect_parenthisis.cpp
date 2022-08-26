#include<iostream>
#include"MYSTACK.h"
using namespace std;

bool detect_duplicate_parenthesis(string st)
{
    Stack <char>a;
    for(int i =0;i<st.length()-1;i++)
    {
        if(st[i]=='(')
        {
            if(a.return_top()==st[i])
            {
                return true;
            }else{
                a.push(st[i]);
            }
        }
         if(st[i]==')')
        {
            if(a.return_top()==st[i])
            {
                return true;
            }else{
                a.push(st[i]);
            }
        }
    }
    return false;
}

int main()
{
    string st;
    cin>>st;
    bool chk =detect_duplicate_parenthesis(st);
    if(chk)
    {
        cout<<"YES"<<endl;
    }else{ cout<<"NO"<<endl;}

    return 0;
}
