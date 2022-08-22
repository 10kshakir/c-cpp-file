#include<iostream>
#include<string>
#include<cmath>
#include"MYSTACK.h"

using namespace std;

int prefix_evaluation(string s)
{
    Stack<int>st;
    for(int i =s.length()-1;i>=0;i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int a =st.pop();
            int b =st.pop();
            switch(s[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;

            }
        }
    }
    return st.return_top();
}
// +*423
//-+7*45+20
int main()
{
    cout<<prefix_evaluation("-+7*45+20");

    return 0;
}
