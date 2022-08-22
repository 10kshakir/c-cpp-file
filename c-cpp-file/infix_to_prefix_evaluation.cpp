#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
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




int precision_calc(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }else return -1;
}

string infix(string chk)
{
    reverse(chk.begin(),chk.end());
    Stack <char> st;
    string result;
    for(int i =0;i<chk.length();i++)
    {
         if(chk[i]>='0'&&chk[i]<='9')
        {
            result+=chk[i];
        }
        else if(chk[i]==')')
        {
            st.push(chk[i]);
        }
        else if( chk[i]=='(')
        {
            while(!st.check_empty()&&st.return_top()!=')')
            {
                result+=st.pop();
            }
            if(!st.check_empty())st.pop();
        }else
        {
            while(!st.check_empty()&&precision_calc(st.return_top())>=precision_calc(chk[i]))
            {
                result+=st.pop();
            }
            st.push(chk[i]);
        }
    }

    while(!st.check_empty())
    {
        result+=st.pop();
    }

    reverse(result.begin(),result.end());

    return result;
}



// +*423
//-+7*45+20
int main()
{
    string inf="(7+(4*5))-(2+0)";
    string prefix =infix(inf);
    cout<<prefix<<endl;
    cout<<prefix_evaluation("+9*3/8 4");

    return 0;
}

