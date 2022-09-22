#include<iostream>
#include<string>
#include<cmath>
#include<stack>

using namespace std;
void print_stack(stack<int> ch)
{
    while(!ch.empty())
    {
        cout<<ch.top()<<" ";
        ch.pop();
    }
    cout<<endl;
}
int prefix_evaluation(string s)
{
    stack<int>st;
    stack<int>st1;
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
                st1=st;
                print_stack(st1);
                break;
            case '-':
                st.push(a-b);
                 st1=st;
                print_stack(st1);
                break;
            case '*':
                st.push(a*b);
                 st1=st;
                print_stack(st1);
                break;
            case '/':
                st.push(a/b);
                 st1=st;
                print_stack(st1);
                break;
            case '^':
                st.push(pow(a,b));
                 st1=st;
                print_stack(st1);
                break;
            default:
                break;

            }
        }
    }
     st1=st;
    print_stack(st1);
    return st.top();
}
// +*423
//-+7*45+20
//-*5+^62-7/26+*7+81*54
int main()
{
    string st;
    cin>>st;
    cout<<prefix_evaluation(st);

    return 0;
}
