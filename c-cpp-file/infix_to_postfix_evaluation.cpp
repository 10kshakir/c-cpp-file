#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<stack>

using namespace std;

int prefix_evaluation(string s)
{
    stack<int>st;
    for(int i =s.length()-1;i>=0;i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int a =st.top();
            st.pop();
            int b =st.top();
            st.pop();
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
    return st.top();
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

void print_stack(stack<char> ch)
{
    string st ="";
    while(!ch.empty())
    {
        st+=ch.top();
        ch.pop();
    }

    reverse(st.begin(),st.end());
    cout<<st;
    cout<<endl;
}

string infix_to_postfix(string chk)
{

    cout<<chk<<endl;
    stack <char> st;
    stack<char>st1;
    string result;
    for(int i =0;i<chk.length();i++)
    {
         if(chk[i]>='0'&&chk[i]<='9')
        {
            result+=chk[i];
            cout<<result<<endl;

        }
        else if(chk[i]=='(')
        {
            st.push(chk[i]);
             cout<<"stack condition : ";
            st1 =st;
            print_stack(st1);
        }
        else if( chk[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                result+=st.top();
                st.pop();
                cout<<result<<endl;
                 cout<<"stack condition : ";
                 st1 =st;
                print_stack(st1);
            }
            if(!st.empty())st.pop();
             cout<<"stack condition : ";
            st1 =st;
                print_stack(st1);


        }else
        {
            while(!st.empty()&&precision_calc(st.top())>=precision_calc(chk[i]))
            {
                result+=st.top();
                st.pop();
                cout<<result<<endl;
                cout<<"stack condition : ";
                st1 =st;
                print_stack(st1);
            }
            st.push(chk[i]);
             cout<<"stack condition : ";
            st1 =st;
                print_stack(st1);
        }
    }


    while(!st.empty())
    {
        result+=st.top();
        st.pop();
    }



    return result;
}



// +*423
//-+7*45+20
int main()
{
    string inf="(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string prefix =infix_to_postfix(inf);
    cout<<prefix<<endl;


    return 0;
}


