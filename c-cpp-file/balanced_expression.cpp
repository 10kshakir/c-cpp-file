#include<iostream>
#include"MYSTACK.h"

using namespace std;

bool balance_expression(string st)
{
    Stack<char> s;
    int count =0;
    for(int i =0;i<st.length();i++)
    {
      if(s.check_empty())
      {
          s.push(st[i]);
      }else
      {
          if((s.return_top()=='('&&st[i]==')')||
             (s.return_top()=='{'&&st[i]=='}')||
             (s.return_top()=='['&&st[i]==']')
             )
          {
            s.pop();
          }else{
            s.push(st[i]);
          }

      }

    }
    if(s.check_empty())return true;
    else return false;
}

int main()
{
    string st;
    cin>>st;
    bool ck =balance_expression(st);
    if(ck)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
